# note
* Phân vùng nhớ: Có 5 phân vùng nhớ
- Text: Chỉ có quyền đọc và chưa khai báo hằng số, chỉ có quyền lấy nó ra sử dụng, không có quyền sửa.
- Data:
+ Quyền truy cập read và write.
+ Chứa biến toàn cục hoặc biến static với giá trị khởi tạo bằng khác 0.
+ Được giải phóng khi kết thúc chương trình.
+ Biến toàn cục thì khi khai báo ngoài các hàm thì function nào cũng có thể lấy nó sử dụng.
+ Biến cục bộ là những biến chỉ có giá trị trong hàm.
+ Có 2 loại là biến static toàn cục và biến static cục bộ.
- BSS:
+ Có quyền truy cập là read và write.
+ Chứa biến toàn cục hoặc biến static với giá trị khởi tạo bằng 0 hoặc không khởi tạo.
+ Được giải phóng khi kết thúc chương trình.
- Stack
+ có quyền truy cập read và write.
+ Được sử dụng cấp phát cho biến như local, input parameter của hàm.
+ Sẽ được giải phóng khi ra khỏi block code/hàm.
+ Khi thoát ra khỏi hàm đã gọi thì nó sẽ thu hết lại các địa chỉ được lưu ở các biến đã khởi tạo.
Nhưng lần sau có thể sử dụng lại những địa chỉ đã thu hồi.
+ Còn biến toàn cục nó sẽ không thu hồi được khi kết thúc chương trình nó mới thu hồi.
- Heap:
+ Có quyền truy cập read và write.
+ Được sử dụng cấp phát bộ nhớ động như malloc, calloc.
+ Được giải phóng khi gọi hàm free.
+ Cấp phát động nó có thể tạo ra 1 mảng và có thể thay đổi kích thước, nó linh hoạt được để tối ưu bộ nhớ.
- So sánh hepa và stack:
+ Bản chất đều cùng là vùng nhớ được tạo ra và lưu trữ trong RAM khi chương trình được thực thi.
+	Stack được dùng để lưu trữ các biến cục bộ trong hàm, tham số truyền vào.
Truy cập vào bộ nhớ này rất nhanh và được thực thi khi chương trình được biên dịch.
+ Vùng nhớ Stack được quản lý bởi hệ điều hành, dữ liệu được lưu trong Stack sẽ tự động hủy khi hàm thực hiện xong công việc của mình.
+ Heap được dùng để lưu trữ vùng nhớ cho những biến con trỏ được cấp phát động bởi các hàm malloc - calloc - realloc (trong C). 
+	Nếu bạn liên tục cấp phát vùng nhớ mà không giải phóng thì sẽ bị lỗi tràn vùng nhớ Heap.
* Macro:
- Được xử lý bởi preprocessor.
- Là cách chuyển vào bản code đầu vào nào đó thành văn bản code đầu ra theo mình muốn.
* Function:
- là một tập hợp những đoạn mã dùng để thực hiện một nhiệm vụ nào đó. Nó có thể được gọi và tái sử dụng nhiều lần.
- Khi thấy hàm được gọi, compiler sẽ phải lưu con trỏ chương trình PC hiện tại vào stack; chuyển PC tới hàm được gọi, 
thực hiện hàm đó xong và lấy kết quả trả về; sau đó quay lại vị trí ban đầu trong stack trước khi gọi hàm và tiếp tục thực hiện chương trình.
* Con trỏ: là những biến đặc biệt được sử dụng để lưu trữ địa chỉ bộ nhớ của những biến khác.
- Con trỏ NULL là một giá trị đặc biệt trong lập trình. Nó có nghĩa là con trỏ đó chưa trỏ đến địa chỉ nào cả.
Nếu không có địa chỉ để gán cho một con trỏ thì có thể sử dụng NULL. Giá trị NULL tránh rò rỉ bộ nhớ và sự cố trong các ứng dụng có chứa con trỏ.
* struct: Là một kiểu dữ liệu cho phép lưu trữ các loại phần tửu khác nhau. Mỗi phần tử của một cấu trúc gọi là member.
- Kích thước của 1 struct tối thiểu bằng kích thước các thành viên cộng lại tại vì còn phụ thuộc vào bộ nhớ đệm.
* union: Là một kiểu dữ liệu đặc biệt cho phép lưu trữ các kiểu dữ liệu khác nhau trong cùng một vị trí bộ nhớ. 
- Union hoạt động giống như cấu trúc (struct) nhưng chỉ lưu trữ giá trị của một thành viên tại một thời điểm.
- Union được sử dụng khi bạn muốn lưu trữ các kiểu dữ liệu khác nhau trong cùng một vùng nhớ.
- Kích thước của union được tính là kích thước lớn nhất của kiểu dữ liệu trong union. 
- Việc thay đổi nội dung của 1 thành viên sẽ dẫn đến thay đổi nội dung của các thành viên khác.
