

def _insert_proper(arr, element):
    if(len(arr) == 0 or arr[len(arr) - 1] <= element):
        arr.append(element)
        return

    temp = int(arr[len(arr) - 1])
    arr.pop(len(arr) - 1)
    _insert_proper(arr, element)
    arr.append(temp)
    return


def _sort_arr(arr):
    n_elements = int(len(arr))
    if(n_elements == 0 or n_elements == 1):
        return
    curr_top = int(arr[n_elements - 1])
    arr.pop(n_elements - 1)
    _sort_arr(arr)
    _insert_proper(arr, curr_top)
    return


if __name__ in "__main__":
    n_elements = int(input())
    arr = list(map(int, input().split()))
    print("Before sorting the array")
    print(arr)

    _sort_arr(arr)

    print("After sorting the array")
    print(arr)
