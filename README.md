# ELECTION
## Vòng đầu tiên của cuộc bầu cử tổng thống đất nước Kc97ble đang diễn ra rất sôi nổi. Có n ứng cử viên được đánh số từ 1 đến n. Mỗi người dân của đất nước Kc97ble sẽ tiến hành bỏ phiếu ủng hộ cho một ứng cử viên duy nhất mà họ tín nhiệm nhất. Với quy tắc bỏ phiếu như trên, có thể xảy ra trường hợp hy hữu rằng tất cả các ứng cử viên đều có số phiếu ủng hộ bằng nhau.
## Hiện tại, ứng cử viên thứ i đã có ai phiếu ủng hộ, và còn k người dân chưa tham gia bỏ phiếu. Hãy cho biết có thể xảy ra trường hợp hy hữu nói trên hay không?
### Dữ liệu 
#### • Dòng đầu tiên gồm số nguyên T - số bộ dữ liệu vào (1 ≤ T ≤ 50).
#### • T nhóm dòng tiếp theo, mỗi nhóm dòng tương ứng với một dữ liệu vào và được định dạng như sau:
##### – Dòng đầu tiên gồm hai số nguyên n và k (2 ≤ n ≤ 100, 0 ≤ k ≤ 104) - số ứng cử viên và số người dân chưa tham gia bầu cử.
##### – Dòng hai gồm n số nguyên a1, a2, . . . , an (0 ≤ ai ≤ 100) - số phiếu ủng hộ hiện tại của từng ứng cử viên.
### Kết quả
#### • Với mỗi bộ dữ liệu vào, nếu trường hợp hy hữu (tất cả các ứng cử viên có số phiếu ủng hộ bằng nhau) có thể xảy ra, in ra ‘YES’. Ngược lại, in ra ‘NO’.
### Ví dụ
| Input      | Output |
|-------     |--------|
|3           |YES     |
|5 3         |NO      |
|1 2 2 0 2   |NO      |
|2 1         |        |
|3 3         |        |
|2 1         |        |
|6 3         |        |
### Giải thích 
#### • Trong ví dụ thứ nhất, nếu ứng cử viên thứ 1 nhận thêm 1 phiếu ủng hộ, ứng cử viên thứ 4 nhận thêm 2 phiếu ủng hộ thì mỗi ứng cử viên sẽ có 2 phiếu ủng hộ. Do đó, trường hợp hy hữu có thể xảy ra.
#### • Trong ví dụ thứ hai và thứ ba, dù ứng cử viên nào nhận được thêm 1 phiếu ủng hộ thì số phiếu của hai ứng cử viên cũng sẽ luôn khác nhau. Do đó, trường hợp hy hữu không thể xảy ra
