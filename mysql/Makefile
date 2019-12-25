install: chMariadb repo installdb login
	echo -e "\e[1;36mSUCCESS\e[0m"
chMariadb:
	make -B checkMariadb

checkMariadb:
	./checkMariadb

repo:
	make -B confdbrepo

confdbrepo:
	./confdbrepo

installdb:
	make -B installmysql

installmysql:
	./install

login: logindb
	echo -e " \e[1;31mOK\e[0m"
logindb:
	./login
