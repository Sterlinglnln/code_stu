import tkinter as tk
import random

# 弹窗计数器（初始为0）
window_count = 0
# 最大弹窗数量
MAX_WINDOWS = 50

def create_warm_tip():
    global window_count  # 声明使用全局计数器
    # 创建弹窗（关联主窗口 root）
    window = tk.Toplevel(root)

    # 获取屏幕宽高
    screen_width = root.winfo_screenwidth()
    screen_height = root.winfo_screenheight()

    # 随机窗口位置（确保完全显示）
    window_width = 250
    window_height = 60
    x = random.randrange(0, screen_width - window_width)
    y = random.randrange(0, screen_height - window_height)

    # 设置窗口标题、大小和位置
    window.title('温馨提示')
    window.geometry(f"{window_width}x{window_height}+{x}+{y}")

    # 随机提示文字
    tips = [
        '多喝水哦~', '保持微笑呀', '每天都要元气满满',
        '记得吃水果', '保持好心情', '好好爱自己', '我想你了',
        '梦想成真', '期待下一次见面', '金榜题名',
        '顺顺利利', '早点休息', '愿所有烦恼都消失',
        '别熬夜', '今天过得开心嘛', '天冷了，多穿衣服'
    ]
    tip = random.choice(tips)

    # 随机背景颜色
    bg_colors = [
        'lightpink', 'skyblue', 'lightgreen', 'lavender',
        'lightyellow', 'plum', 'coral', 'bisque', 'aquamarine',
        'mistyrose', 'honeydew', 'lavenderblush', 'oldlace'
    ]
    bg = random.choice(bg_colors)

    # 创建标签显示文字
    tk.Label(
        window,
        text=tip,
        bg=bg,
        font=('微软雅黑', 16),
        width=30,
        height=3
    ).pack()

    # 窗口置顶（新弹窗会显示在最上层）
    window.attributes('-topmost', True)

    # 弹窗数量+1
    window_count += 1


def auto_pop_tips(interval=300):  # 间隔时间（毫秒），0.3秒=300毫秒
    # 只有当弹窗数量小于300时，才继续创建
    if window_count < MAX_WINDOWS:
        create_warm_tip()  # 创建一个弹窗
        # 继续定时递归调用（实现循环弹窗）
        root.after(interval, auto_pop_tips, interval)
    else:
        # 达到300个弹窗后，打印提示并停止
        print(f"已达到最大弹窗数量（{MAX_WINDOWS}个），自动暂停")


# 创建主窗口（隐藏，作为所有弹窗的父窗口）
root = tk.Tk()
root.withdraw()  # 隐藏主窗口

# 启动定时弹窗（间隔0.3秒）
auto_pop_tips(300)

# 启动主循环
root.mainloop()