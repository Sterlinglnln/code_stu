import math

def caculate_status_correct(data_groups, confidence_level=0.95):
    """
    计算多组数据的平均值、标准差、标准误差和极限误差（正确定义）
    
    参数:
        data_groups (dict): 字典格式，键为数据组名称，值为数据列表
                            示例: {"组1": [1.1, 1.2, 1.3], "组2": [2.1, 2.2, 2.3]}
        confidence_level (float): 置信水平，可选0.90/0.95/0.99，默认0.95
    
    返回:
        dict: 包含每组数据的平均值、标准差、标准误差、极限误差、置信区间
    """
    # t值查表
    confidence_coeff = {
        0.90: 1.645,
        0.95: 1.960,
        0.99: 2.576
    }

    # 检查置信水平是否有效
    if confidence_level not in confidence_coeff:
        raise ValueError(f"置信水平仅支持 {list(confidence_coeff.keys())}")
    
    t = confidence_coeff[confidence_level] # 获取对应的t值
    results = {}

    for group_name, data in data_groups.items():
        # 数据检验
        if not isinstance(data, list) or len(data) < 2:
            raise ValueError(f"{group_name} 数据应为包含至少两个数值的列表")
        try:
            data = [float(x) for x in data]
        except ValueError:
            raise ValueError(f"{group_name} 数据列表中应仅包含数值")
        
        n = len(data)
        # 计算平均值
        mean = sum(data) / n
        # 计算标准差
        squared_deviations = [(x - mean) ** 2 for x in data]
        sample_std = math.sqrt(sum(squared_deviations) / (n - 1))
        # 计算标准误差
        standard_error = sample_std / math.sqrt(n)
        # 计算极限误差
        limit_error = t * standard_error
        # 计算置信区间
        confidence_interval = (round(mean - limit_error, 4), round(mean + limit_error, 4))

        # 保存结果
        results[group_name] = {
            "平均值": round(mean, 4),
            "标准差": round(sample_std, 4),
            "标准误差": round(standard_error, 4),
            "极限误差": round(limit_error, 4),
            "置信区间": confidence_interval
        }

    return results

# 示例用法
if __name__ == "__main__":
    # 测试数据
    test_data= {
        "实验组1": [10.1, 10.2, 9.9, 10.0, 10.3],
        "实验组2": [25.5, 25.7, 25.6, 25.8, 25.4],
        "对照组": [5.0, 5.1, 4.9, 5.2, 4.8]
    }

    # 计算结果(置信水平95%)
    results = caculate_status_correct(test_data, confidence_level=0.95)

    # 输出结果
    print("计算结果:")
    for group, stats in results.items():
        print(f"\n{group}:")
        print(f"  平均值: {stats['平均值']}")
        print(f"  标准差: {stats['标准差']}")
        print(f"  标准误差: {stats['标准误差']}")
        print(f"  极限误差: {stats['极限误差']}")
        print(f"  置信区间: {stats['置信区间']}")
