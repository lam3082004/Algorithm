def count_substring(string, sub_string):
    dem = int(0)
    for i in range(len(string)-len(sub_string)+1):
        if string[i:i+len(sub_string)] == sub_string:
            dem = dem+1
    return dem
