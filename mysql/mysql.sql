alter user 'user'@'location' identified by 'newpassword'
create user 'newuser'@'localhost' identified by 'user_password';
grant all privileges on *.* to 'user'*'ip_address';
