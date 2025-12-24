import os
import re

def rename_cpp_files(directory):
    """
    遍历指定目录，将形如 '数字.名称.cpp' 的文件重命名为 '数字.cpp'
    """
    for filename in os.listdir(directory):
        # 匹配模式：以数字开头，接着是点号，然后任意非换行字符，最后是 .cpp
        match = re.fullmatch(r'(\d+)\..*?\.cpp', filename)
        if match:
            number = match.group(1)
            new_name = f"{number}.cpp"
            old_path = os.path.join(directory, filename)
            new_path = os.path.join(directory, new_name)

            # 避免覆盖已存在的文件
            if os.path.exists(new_path):
                print(f"跳过 {filename} -> {new_name}（目标文件已存在）")
                continue

            os.rename(old_path, new_path)
            print(f"重命名: {filename} -> {new_name}")

if __name__ == "__main__":
    target_dir = '.' 
    rename_cpp_files(target_dir)