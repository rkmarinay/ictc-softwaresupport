<?php
	$hostname='ictc-softwaresupport-mysqldbserver.mysql.database.azure.com';
	$username='rkmarinay@ictc-softwaresupport-mysqldbserver';
	$password='P@ssw0rd';
	$conn=mysql_connect($hostname, $username, $password)
		or die ('Error connecting to mysql'); mysql_select_db('ictc-softwaresupport');
?>