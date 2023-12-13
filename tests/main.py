import time
start_time = time.time()
result = 0
for i in range(1000000000):
    result += i
end_time = time.time()
duration = (end_time - start_time) * 1e6  
print(f"Python Time: {duration} microseconds")
