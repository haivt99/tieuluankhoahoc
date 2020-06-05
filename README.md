# Hệ thống điều khiển chuyển mạch điện dân dụng với vi điều khiển máy tính nhúng Arduino

1. Lý do chọn đề tài
Đề tài: Hệ thống điều khiển chuyển mạch dân dụng với vi điều khiển máy tính nhúng Arduino
Chúng ta đang sống trong thời đại công nghệ 4.0 hay cuộc cách mạng công nghiệp lần thứ 4. Khác hoàn toàn với ba cuộc cách mạng công nghiệp trong quá khứ chỉ thay đổi cách thức hoạt động của ngành công nghiệp, cuộc cách mạng công nghiệp lần này dấy lên rất nhiều câu hỏi cho nhân loại về vị trí và vai trò của con người và máy tính điện tử thông minh.
Song song với đó là thời đại của những con chip điện tử, vi mạch lên ngôi, đóng góp một phần lớn để thay đổi tương lai. Ngoài ram sự phát triển vượt bậc của khoa học kĩ thuật đã cho ra đời nhiều sản phẩm mang tính đột phá, vượt trội.
2. Công cụ

• IDE Arduino(Sử dụng ngôn ngữ lập trình C++)
• Phần mềm Processing(Sử dụng ngôn ngữ lập trình Java): Giúp tạo giao diện

3. Lắp ráp thiết bị theo sơ đồ sau:

•	IN (Rơ le 1) -> chân 11 digital (Arduino)

•	DC-(Rơ le 1) -> GND(Arduino) (Nối chung với DC-(Rơ le 2))

•	DC+(Rơ le 1) -> 5V(Arduino) (Nối chung với DC+(Rơ le2))

•	IN (Rơ le 2) -> chân 8 digital (Arduino)

•	NO (Rơ le 1) -> 1 dây của thiết bị điện(bóng đèn)

•	Dây còn lại của thiết bị điện -> Nguồn điện 220V

•	Nguồn điện 220V -> chân COM(Rơ le 1)

•	NO (Rơ le 2) -> 1 dây của thiết bị điện (bóng đèn)

•	Dây còn lại của thiết bị điện -> Nguồn điện 220V

•	Nguồn điện 220V -> chân COM(Rơ le 2)

•	IN (Rơ le 3) -> chân 13 digital (Arduino)

•	DC-(Rơ le 1) -> GND(Arduino) (Nối chung với GND của của biến)

•	DC+(Rơ le 1) -> 5V(Arduino) (Nối chung với VCC của cảm biến)

•	DO(Cảm biến) -> chân 10 digital(Arduino)

•	NO (Rơ le 3) -> 1 dây của thiết bị điện (quạt)

•	Dây còn lại của thiết bị điện -> Nguồn điện 220V

•	Nguồn điện 220V -> chân COM(Rơ le 3)

4. Demo sản phẩm
Để theo dõi trực quan hơn, mọi người có thể theo dõi ở đường link sau:
Youtube: https://www.youtube.com/watch?v=WGUJ0vJE_tY

