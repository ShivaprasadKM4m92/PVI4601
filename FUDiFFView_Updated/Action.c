﻿Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS");
	
	web_cleanup_auto_headers();
	
	lr_start_transaction("FUDiFFView_01_OpenApplication");

	web_add_header("Accept", 
		"*/*");

	web_add_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.83 Safari/537.36");


	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Login",
		LAST);

	web_url("external", 
		"URL={URL}/external", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_add_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("If-None-Match", 
		"70a0ed92533c68450322b3b43701defa134d8440");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_concurrent_start(NULL);
	web_url("login-17e4cb116ee46711bb739b7018d00771.css", 
		"URL={URL}/assets/login-17e4cb116ee46711bb739b7018d00771.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/external", 
		"Snapshot=t4.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("bootstrap.min-79b5346433d3bdf736aab2379a008083.js", 
		"URL={URL}/assets/vendorUi/bootstrap/bootstrap.min-79b5346433d3bdf736aab2379a008083.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/external", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("notify.min-a1134657dba6e98914066f2530604e68.js", 
		"URL={URL}/assets/vendorUi/notifyjs/dist/notify.min-a1134657dba6e98914066f2530604e68.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/external", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("notify-metro-3463085bfd0a7cac9f983d075b271bca.js", 
		"URL={URL}/assets/vendorUi/notifications/notify-metro-3463085bfd0a7cac9f983d075b271bca.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/external", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("jquery.core-2521768e514d3a431ddca828a1bebd3c.js", 
		"URL={URL}/assets/common/jquery.core-2521768e514d3a431ddca828a1bebd3c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/external", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("jquery-fdb24ba38c94d04e948de967076c64aa.js", 
		"URL={URL}/assets/vendorUi/jquery/jquery-fdb24ba38c94d04e948de967076c64aa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/external", 
		"Snapshot=t9.inf", 
		LAST);

	
//	web_add_auto_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_auto_header("Accept-Encoding", 
//		"gzip, deflate");

	web_url("bootstrap-c5ae98cdc147f655f96564c4340000c4.css", 
		"URL={URL}/assets/bootstrap-c5ae98cdc147f655f96564c4340000c4.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/external", 
		"Snapshot=t11.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("FUDiFFView_01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("FUDiFFView_02_Login");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Origin", 
		"{URL}");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment - Do not change!  Original value='5aef2121-e30e-4e58-863f-79431fcee221' Name ='Token_Id_1' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=Token_Id_1",
		"LB=token=",
		"RB=\r\n",
		SEARCH_FILTERS,
		"Scope=Headers",
		"IgnoreRedirections=No",
		"RequestUrl=*/authenticate*",
		LAST);

	web_reg_find("Search=Body",
		"Text=Welcome to PV Admin",
		LAST);

	web_submit_data("authenticate", 
		"Action={URL}/login/authenticate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={URL}/external", 
		"Snapshot=t12.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=username", "Value={UserName}", ENDITEM, 
		"Name=password", "Value={Password}", ENDITEM, 
		"Name=callBackUrl", "Value=/", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("UIConstants-e05f20031f3c986ffd86b552402112e0.js",
		"URL={URL}/assets/UIConstants-e05f20031f3c986ffd86b552402112e0.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/?token={Token_Id_1}",
		"Snapshot=t13.inf",
		LAST);

	web_url("application-3d87bac6ca7e570033e3b49e320180b2.css",
		"URL={URL}/assets/application-3d87bac6ca7e570033e3b49e320180b2.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer={URL}/?token={Token_Id_1}",
		"Snapshot=t14.inf",
		LAST);

	web_url("jquery-2.2.4-f3b292379cbb03d9a68dc04fb0ac6bf5.js",
		"URL={URL}/assets/vendorUi/jquery/jquery-2.2.4-f3b292379cbb03d9a68dc04fb0ac6bf5.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/?token={Token_Id_1}",
		"Snapshot=t15.inf",
		LAST);

	web_url("change-theme-d6b58272d1305acd108c19d477017de0.js",
		"URL={URL}/assets/common/change-theme-d6b58272d1305acd108c19d477017de0.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/?token={Token_Id_1}",
		"Snapshot=t16.inf",
		LAST);

//	web_concurrent_end(NULL);
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("loadTheme",
		"URL={URL}/preference/loadTheme",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/?token={Token_Id_1}",
		"Snapshot=t17.inf",
		"Mode=HTTP",
		LAST);

//	web_add_header("Origin", 
//		"{URL}");
//
//	web_concurrent_start(NULL);

	web_url("OpenSans-Regular-cffb686d7d2f4682df8342bd4d276e09.woff2", 
		"URL={URL}/assets/OpenSans-Regular-cffb686d7d2f4682df8342bd4d276e09.woff2?v=1.1.0", 
		"Resource=1", 
		"Referer={URL}/assets/application-3d87bac6ca7e570033e3b49e320180b2.css", 
		"Snapshot=t18.inf", 
		LAST);

//	web_add_header("Origin", 
//		"{URL}");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={URL}/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"Referer={URL}/assets/application-3d87bac6ca7e570033e3b49e320180b2.css", 
		"Snapshot=t19.inf", 
		LAST);

//	web_concurrent_end(NULL);

	web_url("application-73702747dcb4dc1831955be89087898f.js",
		"URL={URL}/assets/application-73702747dcb4dc1831955be89087898f.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/?token={Token_Id_1}",
		"Snapshot=t20.inf",
		LAST);

//	web_revert_auto_header("Accept");
//
//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("en.json",
		"URL={URL}/assets/i18n/en.json",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/?token={Token_Id_1}",
		"Snapshot=t21.inf",
		"Mode=HTTP",
		LAST);

//	web_add_header("Origin", 
//		"{URL}");

	web_url("materialdesignicons-webfont-af3f6dbe172a9c1aba77366a2ff630d1.woff2", 
		"URL={URL}/assets/materialdesignicons-webfont-af3f6dbe172a9c1aba77366a2ff630d1.woff2?v=2.1.99", 
		"Resource=1", 
		"Referer={URL}/assets/application-3d87bac6ca7e570033e3b49e320180b2.css", 
		"Snapshot=t22.inf", 
		LAST);

	web_concurrent_end(NULL);
	
	lr_end_transaction("FUDiFFView_02_Login",LR_AUTO);

	lr_think_time(3);


	
	lr_start_transaction("FUDiFFView_03_NavigateToPVIntake");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment - Do not change!  Original value='ebb2b921-905e-4d13-bedb-dd502f1541be' Name ='Token_Id2' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=Token_Id2",
		"LB= content=\"",
		"RB=\"/>\n        ",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/10.100.22.243:8081/*",
		LAST);

	web_reg_find("Search=Body",
		"Text=PV Intake",
		LAST);

	web_url("10.100.22.243:8081",
		"URL={PVI_URL}/",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={URL}/?token={Token_Id_1}",
		"Snapshot=t24.inf",
		"Mode=HTTP",
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(NULL);

	web_url("dashboard-manifest-b8c4a5998dad68d4595e4d0aa8d50016.css", 
		"URL={PVI_URL}/assets/app/dashboard/dashboard-manifest-b8c4a5998dad68d4595e4d0aa8d50016.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={PVI_URL}/", 
		"Snapshot=t25.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("change-theme-6ebd5f05979bc64dfe2d6f10b3e3b3db.js", 
		"URL={PVI_URL}/assets/common/change-theme-6ebd5f05979bc64dfe2d6f10b3e3b3db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PVI_URL}/", 
		"Snapshot=t26.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery-2.2.4-e72e6e97da5fd952079c33c415741fc6.js", 
		"URL={PVI_URL}/assets/vendorUi/jquery/jquery-2.2.4-e72e6e97da5fd952079c33c415741fc6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PVI_URL}/", 
		"Snapshot=t27.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("application-13a1ddae267b7b6a32d12cfb1ac98e43.css", 
		"URL={PVI_URL}/assets/application-13a1ddae267b7b6a32d12cfb1ac98e43.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={PVI_URL}/", 
		"Snapshot=t28.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("UIConstants-ee3587ab40d47b8bed173814ecf5a0be.js", 
		"URL={PVI_URL}/assets/UIConstants-ee3587ab40d47b8bed173814ecf5a0be.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PVI_URL}/", 
		"Snapshot=t29.inf", 
		LAST);

//	web_concurrent_end(NULL);
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("loadTheme_2", 
		"URL={PVI_URL}/preference/loadTheme", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t30.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("Origin", 
//		"{PVI_URL}");

	web_url("OpenSans-Regular-cffb686d7d2f4682df8342bd4d276e09.woff2_2", 
		"URL={PVI_URL}/assets/OpenSans-Regular-cffb686d7d2f4682df8342bd4d276e09.woff2?v=1.1.0", 
		"Resource=1", 
		"Referer={PVI_URL}/assets/application-13a1ddae267b7b6a32d12cfb1ac98e43.css", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("dashboard-manifest-10f1ed9d89cf396671bd4e3042b74253.js", 
		"URL={PVI_URL}/assets/app/dashboard/dashboard-manifest-10f1ed9d89cf396671bd4e3042b74253.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PVI_URL}/", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("application-a0469687a4859320633b35ed9c5374ee.js", 
		"URL={PVI_URL}/assets/application-a0469687a4859320633b35ed9c5374ee.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PVI_URL}/", 
		"Snapshot=t33.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("appConfig", 
		"URL={PVI_URL}/config/appConfig", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t34.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("attachmentViewer-manifest-b347c0c37643c7b9e173f4b09adae617.js", 
		"URL={PVI_URL}/assets/vendor/attachmentViewer-manifest-b347c0c37643c7b9e173f4b09adae617.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PVI_URL}/", 
		"Snapshot=t35.inf", 
		LAST);

//	web_add_header("Origin", 
//		"{PVI_URL}");
//
//	web_concurrent_start(NULL);

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2_2", 
		"URL={PVI_URL}/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"Referer={PVI_URL}/assets/application-13a1ddae267b7b6a32d12cfb1ac98e43.css", 
		"Snapshot=t36.inf", 
		LAST);

//	web_add_header("Origin", 
//		"{PVI_URL}");

	web_url("materialdesignicons-webfont-af3f6dbe172a9c1aba77366a2ff630d1.woff2_2", 
		"URL={PVI_URL}/assets/materialdesignicons-webfont-af3f6dbe172a9c1aba77366a2ff630d1.woff2?v=2.1.99", 
		"Resource=1", 
		"Referer={PVI_URL}/assets/application-13a1ddae267b7b6a32d12cfb1ac98e43.css", 
		"Snapshot=t37.inf", 
		LAST);

//	web_concurrent_end(NULL);
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("loadAllState", 
		"URL={PVI_URL}/user/loadAllState?pageType=&section=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t38.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("referenceData", 
		"URL={PVI_URL}/task/referenceData?_=1598849105993", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t39.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("loadServerTime", 
		"URL={PVI_URL}/config/loadServerTime?_=1598849105994", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t40.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("personalStats", 
		"URL={PVI_URL}/dashboard/personalStats?_=1598849105995", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("predefinedSearch.json", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/predefinedSearch.json?_=1598849105999", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("en-US.json", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/en-US.json?_=1598849105998", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t43.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("2", 
		"URL={PVI_URL}/case/rest/list_columns/2?_=1598849105996", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t44.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("1", 
		"URL={PVI_URL}/case/rest/list_columns/1?_=1598849105997", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t45.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("redactionReason.json", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/redactionReason.json?_=1598849106000", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t46.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("commentTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/commentTemplate.html?_=1598849106001", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t47.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("copyOverlayTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/copyOverlayTemplate.html?_=1598849106003", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t48.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("downloadOverlayTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/downloadOverlayTemplate.html?_=1598849106004", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t49.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("Origin", 
//		"{PVI_URL}");

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL={PVI_URL}/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"Referer={PVI_URL}/assets/application-13a1ddae267b7b6a32d12cfb1ac98e43.css", 
		"Snapshot=t50.inf", 
		LAST);

	web_url("contextMenuTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/contextMenuTemplate.html?_=1598849106002", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t51.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("esignOverlayTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/esignOverlayTemplate.html?_=1598849106005", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("hyperlinkMenuTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/hyperlinkMenuTemplate.html?_=1598849106006", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t53.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("overwriteOverlayTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/overwriteOverlayTemplate.html?_=1598849106008", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t54.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);
//	web_add_header("Origin", 
//		"{PVI_URL}");

	web_add_header("X-CSRF-TOKEN",
		"{Token_Id2}");

	
	web_concurrent_start(NULL);
	web_submit_data("loadState", 
		"Action={PVI_URL}/user/loadState", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=pageType", "Value=intake_queue_form", ENDITEM, 
		"Name=section", "Value=DataTable", ENDITEM, 
		LAST);

	//web_concurrent_start(NULL);
	web_url("imageStampOverlayTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/imageStampOverlayTemplate.html?_=1598849106007", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t56.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("pageRedactionOverlayTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/pageRedactionOverlayTemplate.html?_=1598849106009", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t57.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("printTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printTemplate.html?_=1598849106011", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t58.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("printOverlayTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printOverlayTemplate.html?_=1598849106010", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t59.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("unsavedChangesOverlayTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/unsavedChangesOverlayTemplate.html?_=1598849106013", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t60.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("redactionReasonTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/redactionReasonTemplate.html?_=1598849106012", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t61.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("viewerTemplate.html", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/viewerTemplate.html?_=1598849106014", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t62.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Origin", 
		"{PVI_URL}");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Token_Id2}");

	web_concurrent_start(NULL);
	web_submit_data("updateWidget", 
		"Action={PVI_URL}/dashboard/updateWidget", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t63.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=items", "Value=[\n    {\n        \"id\": \"789\",\n        \"x\": 0,\n        \"y\": 0,\n        \"width\": 3,\n        \"height\": 3\n    },\n    {\n        \"id\": \"790\",\n        \"x\": 3,\n        \"y\": 0,\n        \"width\": 9,\n        \"height\": 3\n    },\n    {\n        \"id\": \"791\",\n        \"x\": 0,\n        \"y\": 3,\n        \"width\": 12,\n        \"height\": 7\n    },\n    {\n        \"id\": \"792\",\n        \"x\": 0,\n        \"y\": 10,\n        \"width\": 12,\n       "
		" \"height\": 7\n    }\n]", ENDITEM, 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_submit_data("loadState_2", 
		"Action={PVI_URL}/user/loadState", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t64.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=pageType", "Value=case_list_form", ENDITEM, 
		"Name=section", "Value=DataTable", ENDITEM, 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_submit_data("updateWidget_2", 
		"Action={PVI_URL}/dashboard/updateWidget", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t65.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=items", "Value=[\n    {\n        \"id\": \"789\",\n        \"x\": 0,\n        \"y\": 0,\n        \"width\": 3,\n        \"height\": 3\n    },\n    {\n        \"id\": \"790\",\n        \"x\": 3,\n        \"y\": 0,\n        \"width\": 9,\n        \"height\": 3\n    },\n    {\n        \"id\": \"791\",\n        \"x\": 0,\n        \"y\": 3,\n        \"width\": 12,\n        \"height\": 7\n    },\n    {\n        \"id\": \"792\",\n        \"x\": 0,\n        \"y\": 10,\n        \"width\": 12,\n       "
		" \"height\": 7\n    }\n]", ENDITEM, 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_submit_data("2_2", 
		"Action={PVI_URL}/case/rest/list/2", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t66.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=draw", "Value=2", ENDITEM, 
		"Name=columns[0][data]", "Value=selected", ENDITEM, 
		"Name=columns[0][name]", "Value=selected", ENDITEM, 
		"Name=columns[0][searchable]", "Value=true", ENDITEM, 
		"Name=columns[0][orderable]", "Value=false", ENDITEM, 
		"Name=columns[0][search][value]", "Value=", ENDITEM, 
		"Name=columns[0][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[1][data]", "Value=intakeCaseNumber", ENDITEM, 
		"Name=columns[1][name]", "Value=intakeCaseNumber", ENDITEM, 
		"Name=columns[1][searchable]", "Value=true", ENDITEM, 
		"Name=columns[1][orderable]", "Value=true", ENDITEM, 
		"Name=columns[1][search][value]", "Value=", ENDITEM, 
		"Name=columns[1][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[2][data]", "Value=firstReceiptDateString", ENDITEM, 
		"Name=columns[2][name]", "Value=firstReceiptDate", ENDITEM, 
		"Name=columns[2][searchable]", "Value=true", ENDITEM, 
		"Name=columns[2][orderable]", "Value=true", ENDITEM, 
		"Name=columns[2][search][value]", "Value=", ENDITEM, 
		"Name=columns[2][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[3][data]", "Value=products", ENDITEM, 
		"Name=columns[3][name]", "Value=products.name", ENDITEM, 
		"Name=columns[3][searchable]", "Value=true", ENDITEM, 
		"Name=columns[3][orderable]", "Value=false", ENDITEM, 
		"Name=columns[3][search][value]", "Value=", ENDITEM, 
		"Name=columns[3][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[4][data]", "Value=attachments", ENDITEM, 
		"Name=columns[4][name]", "Value=attachments.name", ENDITEM, 
		"Name=columns[4][searchable]", "Value=true", ENDITEM, 
		"Name=columns[4][orderable]", "Value=false", ENDITEM, 
		"Name=columns[4][search][value]", "Value=", ENDITEM, 
		"Name=columns[4][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[5][data]", "Value=senderType", ENDITEM, 
		"Name=columns[5][name]", "Value=senderType.value", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=senderName", ENDITEM, 
		"Name=columns[6][name]", "Value=senderName", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=true", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=assignedToUsername", ENDITEM, 
		"Name=columns[7][name]", "Value=assignedToUsername", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=true", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=caseVersion", ENDITEM, 
		"Name=columns[8][name]", "Value=caseVersion", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=reporterQualification", ENDITEM, 
		"Name=columns[9][name]", "Value=reporters.qualificationValue", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=events", ENDITEM, 
		"Name=columns[10][name]", "Value=events.eventName", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=false", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=caseSeriousness", ENDITEM, 
		"Name=columns[11][name]", "Value=caseSeriousness.category", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=priority", ENDITEM, 
		"Name=columns[12][name]", "Value=priority.value", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=true", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=dueDateString", ENDITEM, 
		"Name=columns[13][name]", "Value=dueDate", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=isRelated", ENDITEM, 
		"Name=columns[14][name]", "Value=isRelated", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=true", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=safetyCaseNumber", ENDITEM, 
		"Name=columns[15][name]", "Value=safetyCaseNumber", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=true", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=reportType", ENDITEM, 
		"Name=columns[16][name]", "Value=reportType", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[17][name]", "Value=patientAge", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=false", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=gender", ENDITEM, 
		"Name=columns[18][name]", "Value=gender.value", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=true", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=destination", ENDITEM, 
		"Name=columns[19][name]", "Value=icsr.destination", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=true", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=reportDueDateString", ENDITEM, 
		"Name=columns[20][name]", "Value=icsr.dueDate", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=true", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=reporterComments", ENDITEM, 
		"Name=columns[21][name]", "Value=reporterComments", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=false", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=reporters", ENDITEM, 
		"Name=columns[22][name]", "Value=reporters.name", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=true", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=eventCountry", ENDITEM, 
		"Name=columns[23][name]", "Value=eventCountry.name", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=true", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=reportVersion", ENDITEM, 
		"Name=columns[24][name]", "Value=icsr.reportVersion", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=true", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=icsr", ENDITEM, 
		"Name=columns[25][name]", "Value=icsr.transmissionStatus", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=true", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=stateTimestampString", ENDITEM, 
		"Name=columns[26][name]", "Value=icsr.stateTimestamp", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=true", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=reportMessage", ENDITEM, 
		"Name=columns[27][name]", "Value=icsr.reportMessage", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=false", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=eventName", ENDITEM, 
		"Name=columns[28][name]", "Value=eventName", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=true", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=eventStartDate", ENDITEM, 
		"Name=columns[29][name]", "Value=eventStartDate", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=true", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=outcome", ENDITEM, 
		"Name=columns[30][name]", "Value=outcome.value", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=reporterCountry", ENDITEM, 
		"Name=columns[31][name]", "Value=reporters.countryName", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=relatednessString", ENDITEM, 
		"Name=columns[32][name]", "Value=relatednessString", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=sourceType", ENDITEM, 
		"Name=columns[33][name]", "Value=sourceType.type", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=categories", ENDITEM, 
		"Name=columns[34][name]", "Value=categories.value", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=false", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=mostRecentReceiptDateString", ENDITEM, 
		"Name=columns[35][name]", "Value=mostRecentReceiptDate", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=productName", ENDITEM, 
		"Name=columns[36][name]", "Value=productName", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=true", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[37][data]", "Value=substances", ENDITEM, 
		"Name=columns[37][name]", "Value=substances.nameValue", ENDITEM, 
		"Name=columns[37][searchable]", "Value=true", ENDITEM, 
		"Name=columns[37][orderable]", "Value=false", ENDITEM, 
		"Name=columns[37][search][value]", "Value=", ENDITEM, 
		"Name=columns[37][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[38][data]", "Value=studyNumber", ENDITEM, 
		"Name=columns[38][name]", "Value=studyNumber", ENDITEM, 
		"Name=columns[38][searchable]", "Value=true", ENDITEM, 
		"Name=columns[38][orderable]", "Value=true", ENDITEM, 
		"Name=columns[38][search][value]", "Value=", ENDITEM, 
		"Name=columns[38][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[39][data]", "Value=caseState", ENDITEM, 
		"Name=columns[39][name]", "Value=caseState", ENDITEM, 
		"Name=columns[39][searchable]", "Value=true", ENDITEM, 
		"Name=columns[39][orderable]", "Value=true", ENDITEM, 
		"Name=columns[39][search][value]", "Value=", ENDITEM, 
		"Name=columns[39][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[40][data]", "Value=versionType", ENDITEM, 
		"Name=columns[40][name]", "Value=versionType.value", ENDITEM, 
		"Name=columns[40][searchable]", "Value=true", ENDITEM, 
		"Name=columns[40][orderable]", "Value=true", ENDITEM, 
		"Name=columns[40][search][value]", "Value=", ENDITEM, 
		"Name=columns[40][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[41][data]", "Value=receiptDateString", ENDITEM, 
		"Name=columns[41][name]", "Value=receiptDate", ENDITEM, 
		"Name=columns[41][searchable]", "Value=true", ENDITEM, 
		"Name=columns[41][orderable]", "Value=false", ENDITEM, 
		"Name=columns[41][search][value]", "Value=", ENDITEM, 
		"Name=columns[41][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[42][data]", "Value=onsetDate", ENDITEM, 
		"Name=columns[42][name]", "Value=onsetDate", ENDITEM, 
		"Name=columns[42][searchable]", "Value=true", ENDITEM, 
		"Name=columns[42][orderable]", "Value=true", ENDITEM, 
		"Name=columns[42][search][value]", "Value=", ENDITEM, 
		"Name=columns[42][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[43][data]", "Value=submissionDate", ENDITEM, 
		"Name=columns[43][name]", "Value=submissionDate", ENDITEM, 
		"Name=columns[43][searchable]", "Value=true", ENDITEM, 
		"Name=columns[43][orderable]", "Value=true", ENDITEM, 
		"Name=columns[43][search][value]", "Value=", ENDITEM, 
		"Name=columns[43][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[44][data]", "Value=dosageForm", ENDITEM, 
		"Name=columns[44][name]", "Value=dosageForm.value", ENDITEM, 
		"Name=columns[44][searchable]", "Value=true", ENDITEM, 
		"Name=columns[44][orderable]", "Value=true", ENDITEM, 
		"Name=columns[44][search][value]", "Value=", ENDITEM, 
		"Name=columns[44][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[45][data]", "Value=caseVersionType", ENDITEM, 
		"Name=columns[45][name]", "Value=caseVersionType", ENDITEM, 
		"Name=columns[45][searchable]", "Value=true", ENDITEM, 
		"Name=columns[45][orderable]", "Value=true", ENDITEM, 
		"Name=columns[45][search][value]", "Value=", ENDITEM, 
		"Name=columns[45][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[46][data]", "Value=icsrType", ENDITEM, 
		"Name=columns[46][name]", "Value=icsr.type", ENDITEM, 
		"Name=columns[46][searchable]", "Value=true", ENDITEM, 
		"Name=columns[46][orderable]", "Value=true", ENDITEM, 
		"Name=columns[46][search][value]", "Value=", ENDITEM, 
		"Name=columns[46][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[47][data]", "Value=studyType", ENDITEM, 
		"Name=columns[47][name]", "Value=studyType.value", ENDITEM, 
		"Name=columns[47][searchable]", "Value=true", ENDITEM, 
		"Name=columns[47][orderable]", "Value=true", ENDITEM, 
		"Name=columns[47][search][value]", "Value=", ENDITEM, 
		"Name=columns[47][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[48][data]", "Value=patientName", ENDITEM, 
		"Name=columns[48][name]", "Value=patientName", ENDITEM, 
		"Name=columns[48][searchable]", "Value=true", ENDITEM, 
		"Name=columns[48][orderable]", "Value=true", ENDITEM, 
		"Name=columns[48][search][value]", "Value=", ENDITEM, 
		"Name=columns[48][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[49][data]", "Value=seriousness", ENDITEM, 
		"Name=columns[49][name]", "Value=seriousnessString", ENDITEM, 
		"Name=columns[49][searchable]", "Value=true", ENDITEM, 
		"Name=columns[49][orderable]", "Value=false", ENDITEM, 
		"Name=columns[49][search][value]", "Value=", ENDITEM, 
		"Name=columns[49][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[50][data]", "Value=caseCountry", ENDITEM, 
		"Name=columns[50][name]", "Value=caseCountry.name", ENDITEM, 
		"Name=columns[50][searchable]", "Value=true", ENDITEM, 
		"Name=columns[50][orderable]", "Value=true", ENDITEM, 
		"Name=columns[50][search][value]", "Value=", ENDITEM, 
		"Name=columns[50][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[51][data]", "Value=allReferences", ENDITEM, 
		"Name=columns[51][name]", "Value=allReferences", ENDITEM, 
		"Name=columns[51][searchable]", "Value=true", ENDITEM, 
		"Name=columns[51][orderable]", "Value=false", ENDITEM, 
		"Name=columns[51][search][value]", "Value=", ENDITEM, 
		"Name=columns[51][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[52][data]", "Value=patientId", ENDITEM, 
		"Name=columns[52][name]", "Value=patientId", ENDITEM, 
		"Name=columns[52][searchable]", "Value=true", ENDITEM, 
		"Name=columns[52][orderable]", "Value=true", ENDITEM, 
		"Name=columns[52][search][value]", "Value=", ENDITEM, 
		"Name=columns[52][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[53][data]", "Value=dobString", ENDITEM, 
		"Name=columns[53][name]", "Value=dob", ENDITEM, 
		"Name=columns[53][searchable]", "Value=true", ENDITEM, 
		"Name=columns[53][orderable]", "Value=true", ENDITEM, 
		"Name=columns[53][search][value]", "Value=", ENDITEM, 
		"Name=columns[53][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[54][data]", "Value=matchScore", ENDITEM, 
		"Name=columns[54][name]", "Value=matchScore", ENDITEM, 
		"Name=columns[54][searchable]", "Value=true", ENDITEM, 
		"Name=columns[54][orderable]", "Value=true", ENDITEM, 
		"Name=columns[54][search][value]", "Value=", ENDITEM, 
		"Name=columns[54][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[55][data]", "Value=simpleSearch", ENDITEM, 
		"Name=columns[55][name]", "Value=simpleSearch", ENDITEM, 
		"Name=columns[55][searchable]", "Value=true", ENDITEM, 
		"Name=columns[55][orderable]", "Value=true", ENDITEM, 
		"Name=columns[55][search][value]", "Value={\"simpleSearch\":\"\",\"caseStateId\":\"1,2\",\"config\":\"{\\\"isOrOperation\\\": \\\"false\\\", \\\"sortWhileSearch\\\": \\\"false\\\", \\\"countSearchCriteria\\\": \\\"false\\\"}\",\"sourceDbId\":\"1\",\"firstReceiptDate\":\"{\\\"gte\\\":\\\"2019-09-02T00:00:00Z\\\",\\\"lte\\\":\\\"2020-08-31T23:59:59Z\\\"}\"}", ENDITEM, 
		"Name=columns[55][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[56][data]", "Value=dateRangeSearch", ENDITEM, 
		"Name=columns[56][name]", "Value=dateRangeSearch", ENDITEM, 
		"Name=columns[56][searchable]", "Value=true", ENDITEM, 
		"Name=columns[56][orderable]", "Value=true", ENDITEM, 
		"Name=columns[56][search][value]", "Value=", ENDITEM, 
		"Name=columns[56][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[57][data]", "Value=sourceDb", ENDITEM, 
		"Name=columns[57][name]", "Value=sourceDb", ENDITEM, 
		"Name=columns[57][searchable]", "Value=true", ENDITEM, 
		"Name=columns[57][orderable]", "Value=true", ENDITEM, 
		"Name=columns[57][search][value]", "Value=", ENDITEM, 
		"Name=columns[57][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[58][data]", "Value=safetyWFState", ENDITEM, 
		"Name=columns[58][name]", "Value=safetyWFState", ENDITEM, 
		"Name=columns[58][searchable]", "Value=true", ENDITEM, 
		"Name=columns[58][orderable]", "Value=true", ENDITEM, 
		"Name=columns[58][search][value]", "Value=", ENDITEM, 
		"Name=columns[58][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[59][data]", "Value=centralReceiptDateString", ENDITEM, 
		"Name=columns[59][name]", "Value=centralReceiptDate", ENDITEM, 
		"Name=columns[59][searchable]", "Value=true", ENDITEM, 
		"Name=columns[59][orderable]", "Value=true", ENDITEM, 
		"Name=columns[59][search][value]", "Value=", ENDITEM, 
		"Name=columns[59][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[60][data]", "Value=localSubmissionDateString", ENDITEM, 
		"Name=columns[60][name]", "Value=localSubmissionDate", ENDITEM, 
		"Name=columns[60][searchable]", "Value=true", ENDITEM, 
		"Name=columns[60][orderable]", "Value=true", ENDITEM, 
		"Name=columns[60][search][value]", "Value=", ENDITEM, 
		"Name=columns[60][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[61][data]", "Value=localSubmissionDueDateString", ENDITEM, 
		"Name=columns[61][name]", "Value=localSubmissionDueDate", ENDITEM, 
		"Name=columns[61][searchable]", "Value=true", ENDITEM, 
		"Name=columns[61][orderable]", "Value=true", ENDITEM, 
		"Name=columns[61][search][value]", "Value=", ENDITEM, 
		"Name=columns[61][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[62][data]", "Value=latestAssignmentComment", ENDITEM, 
		"Name=columns[62][name]", "Value=latestAssignmentComment", ENDITEM, 
		"Name=columns[62][searchable]", "Value=true", ENDITEM, 
		"Name=columns[62][orderable]", "Value=false", ENDITEM, 
		"Name=columns[62][search][value]", "Value=", ENDITEM, 
		"Name=columns[62][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[63][data]", "Value=vendor", ENDITEM, 
		"Name=columns[63][name]", "Value=vendor", ENDITEM, 
		"Name=columns[63][searchable]", "Value=true", ENDITEM, 
		"Name=columns[63][orderable]", "Value=true", ENDITEM, 
		"Name=columns[63][search][value]", "Value=", ENDITEM, 
		"Name=columns[63][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[64][data]", "Value=replacementRequired", ENDITEM, 
		"Name=columns[64][name]", "Value=replacementRequired", ENDITEM, 
		"Name=columns[64][searchable]", "Value=true", ENDITEM, 
		"Name=columns[64][orderable]", "Value=true", ENDITEM, 
		"Name=columns[64][search][value]", "Value=", ENDITEM, 
		"Name=columns[64][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[65][data]", "Value=caseCreatedDate", ENDITEM, 
		"Name=columns[65][name]", "Value=caseCreatedDate", ENDITEM, 
		"Name=columns[65][searchable]", "Value=true", ENDITEM, 
		"Name=columns[65][orderable]", "Value=true", ENDITEM, 
		"Name=columns[65][search][value]", "Value=", ENDITEM, 
		"Name=columns[65][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[66][data]", "Value=reporters", ENDITEM, 
		"Name=columns[66][name]", "Value=reporters.organization", ENDITEM, 
		"Name=columns[66][searchable]", "Value=true", ENDITEM, 
		"Name=columns[66][orderable]", "Value=true", ENDITEM, 
		"Name=columns[66][search][value]", "Value=", ENDITEM, 
		"Name=columns[66][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[67][data]", "Value=reporters", ENDITEM, 
		"Name=columns[67][name]", "Value=reporters.department", ENDITEM, 
		"Name=columns[67][searchable]", "Value=true", ENDITEM, 
		"Name=columns[67][orderable]", "Value=true", ENDITEM, 
		"Name=columns[67][search][value]", "Value=", ENDITEM, 
		"Name=columns[67][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[68][data]", "Value=reporters", ENDITEM, 
		"Name=columns[68][name]", "Value=reporters.address", ENDITEM, 
		"Name=columns[68][searchable]", "Value=true", ENDITEM, 
		"Name=columns[68][orderable]", "Value=true", ENDITEM, 
		"Name=columns[68][search][value]", "Value=", ENDITEM, 
		"Name=columns[68][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[69][data]", "Value=reporters", ENDITEM, 
		"Name=columns[69][name]", "Value=reporters.telephone", ENDITEM, 
		"Name=columns[69][searchable]", "Value=true", ENDITEM, 
		"Name=columns[69][orderable]", "Value=true", ENDITEM, 
		"Name=columns[69][search][value]", "Value=", ENDITEM, 
		"Name=columns[69][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[70][data]", "Value=reporters", ENDITEM, 
		"Name=columns[70][name]", "Value=reporters.faxNumber", ENDITEM, 
		"Name=columns[70][searchable]", "Value=true", ENDITEM, 
		"Name=columns[70][orderable]", "Value=true", ENDITEM, 
		"Name=columns[70][search][value]", "Value=", ENDITEM, 
		"Name=columns[70][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[71][data]", "Value=reporters", ENDITEM, 
		"Name=columns[71][name]", "Value=reporters.email", ENDITEM, 
		"Name=columns[71][searchable]", "Value=true", ENDITEM, 
		"Name=columns[71][orderable]", "Value=true", ENDITEM, 
		"Name=columns[71][search][value]", "Value=", ENDITEM, 
		"Name=columns[71][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[72][data]", "Value=pqcCaseNumber", ENDITEM, 
		"Name=columns[72][name]", "Value=pqcCaseNumber", ENDITEM, 
		"Name=columns[72][searchable]", "Value=true", ENDITEM, 
		"Name=columns[72][orderable]", "Value=true", ENDITEM, 
		"Name=columns[72][search][value]", "Value=", ENDITEM, 
		"Name=columns[72][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[73][data]", "Value=returnRequired", ENDITEM, 
		"Name=columns[73][name]", "Value=returnRequired", ENDITEM, 
		"Name=columns[73][searchable]", "Value=true", ENDITEM, 
		"Name=columns[73][orderable]", "Value=true", ENDITEM, 
		"Name=columns[73][search][value]", "Value=", ENDITEM, 
		"Name=columns[73][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[74][data]", "Value=refundRequested", ENDITEM, 
		"Name=columns[74][name]", "Value=refundRequested", ENDITEM, 
		"Name=columns[74][searchable]", "Value=true", ENDITEM, 
		"Name=columns[74][orderable]", "Value=true", ENDITEM, 
		"Name=columns[74][search][value]", "Value=", ENDITEM, 
		"Name=columns[74][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[75][data]", "Value=reporters", ENDITEM, 
		"Name=columns[75][name]", "Value=reporters.contactTypes.value", ENDITEM, 
		"Name=columns[75][searchable]", "Value=true", ENDITEM, 
		"Name=columns[75][orderable]", "Value=false", ENDITEM, 
		"Name=columns[75][search][value]", "Value=", ENDITEM, 
		"Name=columns[75][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[76][data]", "Value=action", ENDITEM, 
		"Name=columns[76][name]", "Value=", ENDITEM, 
		"Name=columns[76][searchable]", "Value=true", ENDITEM, 
		"Name=columns[76][orderable]", "Value=false", ENDITEM, 
		"Name=columns[76][search][value]", "Value=", ENDITEM, 
		"Name=columns[76][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=2", ENDITEM, 
		"Name=order[0][dir]", "Value=desc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=5", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=loadData", "Value=true", ENDITEM, 
		LAST);

//	web_revert_auto_header("Origin");
//
//	web_revert_auto_header("X-CSRF-TOKEN");

	web_url("casePrioritySelect.hbs", 
		"URL={PVI_URL}/assets/common/hbs-templates/casePrioritySelect.hbs", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t67.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_concurrent_end(NULL);

	web_add_header("Origin", 
		"{PVI_URL}");

	web_add_header("X-CSRF-TOKEN",
		"{Token_Id2}");

	web_submit_data("1_2", 
		"Action={PVI_URL}/case/rest/list/1", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t68.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=draw", "Value=2", ENDITEM, 
		"Name=columns[0][data]", "Value=selected", ENDITEM, 
		"Name=columns[0][name]", "Value=selected", ENDITEM, 
		"Name=columns[0][searchable]", "Value=true", ENDITEM, 
		"Name=columns[0][orderable]", "Value=false", ENDITEM, 
		"Name=columns[0][search][value]", "Value=", ENDITEM, 
		"Name=columns[0][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[1][data]", "Value=intakeCaseNumber", ENDITEM, 
		"Name=columns[1][name]", "Value=intakeCaseNumber", ENDITEM, 
		"Name=columns[1][searchable]", "Value=true", ENDITEM, 
		"Name=columns[1][orderable]", "Value=true", ENDITEM, 
		"Name=columns[1][search][value]", "Value=", ENDITEM, 
		"Name=columns[1][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[2][data]", "Value=caseVersion", ENDITEM, 
		"Name=columns[2][name]", "Value=caseVersion", ENDITEM, 
		"Name=columns[2][searchable]", "Value=true", ENDITEM, 
		"Name=columns[2][orderable]", "Value=true", ENDITEM, 
		"Name=columns[2][search][value]", "Value=", ENDITEM, 
		"Name=columns[2][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[3][data]", "Value=firstReceiptDateString", ENDITEM, 
		"Name=columns[3][name]", "Value=firstReceiptDate", ENDITEM, 
		"Name=columns[3][searchable]", "Value=true", ENDITEM, 
		"Name=columns[3][orderable]", "Value=true", ENDITEM, 
		"Name=columns[3][search][value]", "Value=", ENDITEM, 
		"Name=columns[3][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[4][data]", "Value=mostRecentReceiptDateString", ENDITEM, 
		"Name=columns[4][name]", "Value=mostRecentReceiptDate", ENDITEM, 
		"Name=columns[4][searchable]", "Value=true", ENDITEM, 
		"Name=columns[4][orderable]", "Value=true", ENDITEM, 
		"Name=columns[4][search][value]", "Value=", ENDITEM, 
		"Name=columns[4][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[5][data]", "Value=sourceType", ENDITEM, 
		"Name=columns[5][name]", "Value=sourceType.type", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=products", ENDITEM, 
		"Name=columns[6][name]", "Value=products.name", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=false", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=events", ENDITEM, 
		"Name=columns[7][name]", "Value=events.eventName", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=false", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=caseSeriousness", ENDITEM, 
		"Name=columns[8][name]", "Value=caseSeriousness.category", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=dueDateString", ENDITEM, 
		"Name=columns[9][name]", "Value=dueDate", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=caseState", ENDITEM, 
		"Name=columns[10][name]", "Value=caseState", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=assignedToUsername", ENDITEM, 
		"Name=columns[11][name]", "Value=assignedToUsername", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=reporterQualification", ENDITEM, 
		"Name=columns[12][name]", "Value=reporters.qualificationValue", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=true", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=priority", ENDITEM, 
		"Name=columns[13][name]", "Value=priority.value", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=attachments", ENDITEM, 
		"Name=columns[14][name]", "Value=attachments.name", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=false", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=isRelated", ENDITEM, 
		"Name=columns[15][name]", "Value=isRelated", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=true", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=safetyCaseNumber", ENDITEM, 
		"Name=columns[16][name]", "Value=safetyCaseNumber", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=reportType", ENDITEM, 
		"Name=columns[17][name]", "Value=reportType", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=true", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[18][name]", "Value=patientAge", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=false", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=gender", ENDITEM, 
		"Name=columns[19][name]", "Value=gender.value", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=true", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=destination", ENDITEM, 
		"Name=columns[20][name]", "Value=icsr.destination", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=true", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=reportDueDateString", ENDITEM, 
		"Name=columns[21][name]", "Value=icsr.dueDate", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=true", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=reporterComments", ENDITEM, 
		"Name=columns[22][name]", "Value=reporterComments", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=reporters", ENDITEM, 
		"Name=columns[23][name]", "Value=reporters.name", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=true", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=senderType", ENDITEM, 
		"Name=columns[24][name]", "Value=senderType.value", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=true", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=senderName", ENDITEM, 
		"Name=columns[25][name]", "Value=senderName", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=true", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=eventCountry", ENDITEM, 
		"Name=columns[26][name]", "Value=eventCountry.name", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=true", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=reportVersion", ENDITEM, 
		"Name=columns[27][name]", "Value=icsr.reportVersion", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=true", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=icsr", ENDITEM, 
		"Name=columns[28][name]", "Value=icsr.transmissionStatus", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=true", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=stateTimestampString", ENDITEM, 
		"Name=columns[29][name]", "Value=icsr.stateTimestamp", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=true", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=reportMessage", ENDITEM, 
		"Name=columns[30][name]", "Value=icsr.reportMessage", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=false", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=eventName", ENDITEM, 
		"Name=columns[31][name]", "Value=eventName", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=eventStartDate", ENDITEM, 
		"Name=columns[32][name]", "Value=eventStartDate", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=outcome", ENDITEM, 
		"Name=columns[33][name]", "Value=outcome.value", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=reporterCountry", ENDITEM, 
		"Name=columns[34][name]", "Value=reporters.countryName", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=relatednessString", ENDITEM, 
		"Name=columns[35][name]", "Value=relatednessString", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=categories", ENDITEM, 
		"Name=columns[36][name]", "Value=categories.value", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=false", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[37][data]", "Value=productName", ENDITEM, 
		"Name=columns[37][name]", "Value=productName", ENDITEM, 
		"Name=columns[37][searchable]", "Value=true", ENDITEM, 
		"Name=columns[37][orderable]", "Value=true", ENDITEM, 
		"Name=columns[37][search][value]", "Value=", ENDITEM, 
		"Name=columns[37][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[38][data]", "Value=substances", ENDITEM, 
		"Name=columns[38][name]", "Value=substances.nameValue", ENDITEM, 
		"Name=columns[38][searchable]", "Value=true", ENDITEM, 
		"Name=columns[38][orderable]", "Value=false", ENDITEM, 
		"Name=columns[38][search][value]", "Value=", ENDITEM, 
		"Name=columns[38][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[39][data]", "Value=studyNumber", ENDITEM, 
		"Name=columns[39][name]", "Value=studyNumber", ENDITEM, 
		"Name=columns[39][searchable]", "Value=true", ENDITEM, 
		"Name=columns[39][orderable]", "Value=true", ENDITEM, 
		"Name=columns[39][search][value]", "Value=", ENDITEM, 
		"Name=columns[39][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[40][data]", "Value=versionType", ENDITEM, 
		"Name=columns[40][name]", "Value=versionType.value", ENDITEM, 
		"Name=columns[40][searchable]", "Value=true", ENDITEM, 
		"Name=columns[40][orderable]", "Value=true", ENDITEM, 
		"Name=columns[40][search][value]", "Value=", ENDITEM, 
		"Name=columns[40][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[41][data]", "Value=receiptDateString", ENDITEM, 
		"Name=columns[41][name]", "Value=receiptDate", ENDITEM, 
		"Name=columns[41][searchable]", "Value=true", ENDITEM, 
		"Name=columns[41][orderable]", "Value=false", ENDITEM, 
		"Name=columns[41][search][value]", "Value=", ENDITEM, 
		"Name=columns[41][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[42][data]", "Value=onsetDate", ENDITEM, 
		"Name=columns[42][name]", "Value=onsetDate", ENDITEM, 
		"Name=columns[42][searchable]", "Value=true", ENDITEM, 
		"Name=columns[42][orderable]", "Value=true", ENDITEM, 
		"Name=columns[42][search][value]", "Value=", ENDITEM, 
		"Name=columns[42][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[43][data]", "Value=submissionDate", ENDITEM, 
		"Name=columns[43][name]", "Value=submissionDate", ENDITEM, 
		"Name=columns[43][searchable]", "Value=true", ENDITEM, 
		"Name=columns[43][orderable]", "Value=true", ENDITEM, 
		"Name=columns[43][search][value]", "Value=", ENDITEM, 
		"Name=columns[43][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[44][data]", "Value=dosageForm", ENDITEM, 
		"Name=columns[44][name]", "Value=dosageForm.value", ENDITEM, 
		"Name=columns[44][searchable]", "Value=true", ENDITEM, 
		"Name=columns[44][orderable]", "Value=true", ENDITEM, 
		"Name=columns[44][search][value]", "Value=", ENDITEM, 
		"Name=columns[44][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[45][data]", "Value=caseVersionType", ENDITEM, 
		"Name=columns[45][name]", "Value=caseVersionType", ENDITEM, 
		"Name=columns[45][searchable]", "Value=true", ENDITEM, 
		"Name=columns[45][orderable]", "Value=true", ENDITEM, 
		"Name=columns[45][search][value]", "Value=", ENDITEM, 
		"Name=columns[45][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[46][data]", "Value=icsrType", ENDITEM, 
		"Name=columns[46][name]", "Value=icsr.type", ENDITEM, 
		"Name=columns[46][searchable]", "Value=true", ENDITEM, 
		"Name=columns[46][orderable]", "Value=true", ENDITEM, 
		"Name=columns[46][search][value]", "Value=", ENDITEM, 
		"Name=columns[46][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[47][data]", "Value=studyType", ENDITEM, 
		"Name=columns[47][name]", "Value=studyType.value", ENDITEM, 
		"Name=columns[47][searchable]", "Value=true", ENDITEM, 
		"Name=columns[47][orderable]", "Value=true", ENDITEM, 
		"Name=columns[47][search][value]", "Value=", ENDITEM, 
		"Name=columns[47][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[48][data]", "Value=patientName", ENDITEM, 
		"Name=columns[48][name]", "Value=patientName", ENDITEM, 
		"Name=columns[48][searchable]", "Value=true", ENDITEM, 
		"Name=columns[48][orderable]", "Value=true", ENDITEM, 
		"Name=columns[48][search][value]", "Value=", ENDITEM, 
		"Name=columns[48][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[49][data]", "Value=seriousness", ENDITEM, 
		"Name=columns[49][name]", "Value=seriousnessString", ENDITEM, 
		"Name=columns[49][searchable]", "Value=true", ENDITEM, 
		"Name=columns[49][orderable]", "Value=false", ENDITEM, 
		"Name=columns[49][search][value]", "Value=", ENDITEM, 
		"Name=columns[49][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[50][data]", "Value=caseCountry", ENDITEM, 
		"Name=columns[50][name]", "Value=caseCountry.name", ENDITEM, 
		"Name=columns[50][searchable]", "Value=true", ENDITEM, 
		"Name=columns[50][orderable]", "Value=true", ENDITEM, 
		"Name=columns[50][search][value]", "Value=", ENDITEM, 
		"Name=columns[50][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[51][data]", "Value=allReferences", ENDITEM, 
		"Name=columns[51][name]", "Value=allReferences", ENDITEM, 
		"Name=columns[51][searchable]", "Value=true", ENDITEM, 
		"Name=columns[51][orderable]", "Value=false", ENDITEM, 
		"Name=columns[51][search][value]", "Value=", ENDITEM, 
		"Name=columns[51][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[52][data]", "Value=patientId", ENDITEM, 
		"Name=columns[52][name]", "Value=patientId", ENDITEM, 
		"Name=columns[52][searchable]", "Value=true", ENDITEM, 
		"Name=columns[52][orderable]", "Value=true", ENDITEM, 
		"Name=columns[52][search][value]", "Value=", ENDITEM, 
		"Name=columns[52][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[53][data]", "Value=dobString", ENDITEM, 
		"Name=columns[53][name]", "Value=dob", ENDITEM, 
		"Name=columns[53][searchable]", "Value=true", ENDITEM, 
		"Name=columns[53][orderable]", "Value=true", ENDITEM, 
		"Name=columns[53][search][value]", "Value=", ENDITEM, 
		"Name=columns[53][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[54][data]", "Value=matchScore", ENDITEM, 
		"Name=columns[54][name]", "Value=matchScore", ENDITEM, 
		"Name=columns[54][searchable]", "Value=true", ENDITEM, 
		"Name=columns[54][orderable]", "Value=true", ENDITEM, 
		"Name=columns[54][search][value]", "Value=", ENDITEM, 
		"Name=columns[54][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[55][data]", "Value=simpleSearch", ENDITEM, 
		"Name=columns[55][name]", "Value=simpleSearch", ENDITEM, 
		"Name=columns[55][searchable]", "Value=true", ENDITEM, 
		"Name=columns[55][orderable]", "Value=true", ENDITEM, 
		"Name=columns[55][search][value]", "Value={\"simpleSearch\":\"\",\"caseStateId\":\"2,3,4,6\",\"config\":\"{\\\"isOrOperation\\\": \\\"false\\\", \\\"sortWhileSearch\\\": \\\"false\\\", \\\"countSearchCriteria\\\": \\\"false\\\"}\",\"reportDistributionThreshold\":true,\"sourceDbId\":\"1\",\"firstReceiptDate\":\"{\\\"gte\\\":\\\"2019-08-30T00:00:00Z\\\",\\\"lte\\\":\\\"2020-08-28T23:59:59Z\\\"}\"}", ENDITEM, 
		"Name=columns[55][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[56][data]", "Value=dateRangeSearch", ENDITEM, 
		"Name=columns[56][name]", "Value=dateRangeSearch", ENDITEM, 
		"Name=columns[56][searchable]", "Value=true", ENDITEM, 
		"Name=columns[56][orderable]", "Value=true", ENDITEM, 
		"Name=columns[56][search][value]", "Value=", ENDITEM, 
		"Name=columns[56][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[57][data]", "Value=sourceDb", ENDITEM, 
		"Name=columns[57][name]", "Value=sourceDb", ENDITEM, 
		"Name=columns[57][searchable]", "Value=true", ENDITEM, 
		"Name=columns[57][orderable]", "Value=true", ENDITEM, 
		"Name=columns[57][search][value]", "Value=", ENDITEM, 
		"Name=columns[57][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[58][data]", "Value=safetyWFState", ENDITEM, 
		"Name=columns[58][name]", "Value=safetyWFState", ENDITEM, 
		"Name=columns[58][searchable]", "Value=true", ENDITEM, 
		"Name=columns[58][orderable]", "Value=true", ENDITEM, 
		"Name=columns[58][search][value]", "Value=", ENDITEM, 
		"Name=columns[58][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[59][data]", "Value=centralReceiptDateString", ENDITEM, 
		"Name=columns[59][name]", "Value=centralReceiptDate", ENDITEM, 
		"Name=columns[59][searchable]", "Value=true", ENDITEM, 
		"Name=columns[59][orderable]", "Value=true", ENDITEM, 
		"Name=columns[59][search][value]", "Value=", ENDITEM, 
		"Name=columns[59][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[60][data]", "Value=localSubmissionDateString", ENDITEM, 
		"Name=columns[60][name]", "Value=localSubmissionDate", ENDITEM, 
		"Name=columns[60][searchable]", "Value=true", ENDITEM, 
		"Name=columns[60][orderable]", "Value=true", ENDITEM, 
		"Name=columns[60][search][value]", "Value=", ENDITEM, 
		"Name=columns[60][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[61][data]", "Value=localSubmissionDueDateString", ENDITEM, 
		"Name=columns[61][name]", "Value=localSubmissionDueDate", ENDITEM, 
		"Name=columns[61][searchable]", "Value=true", ENDITEM, 
		"Name=columns[61][orderable]", "Value=true", ENDITEM, 
		"Name=columns[61][search][value]", "Value=", ENDITEM, 
		"Name=columns[61][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[62][data]", "Value=latestAssignmentComment", ENDITEM, 
		"Name=columns[62][name]", "Value=latestAssignmentComment", ENDITEM, 
		"Name=columns[62][searchable]", "Value=true", ENDITEM, 
		"Name=columns[62][orderable]", "Value=false", ENDITEM, 
		"Name=columns[62][search][value]", "Value=", ENDITEM, 
		"Name=columns[62][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[63][data]", "Value=vendor", ENDITEM, 
		"Name=columns[63][name]", "Value=vendor", ENDITEM, 
		"Name=columns[63][searchable]", "Value=true", ENDITEM, 
		"Name=columns[63][orderable]", "Value=true", ENDITEM, 
		"Name=columns[63][search][value]", "Value=", ENDITEM, 
		"Name=columns[63][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[64][data]", "Value=replacementRequired", ENDITEM, 
		"Name=columns[64][name]", "Value=replacementRequired", ENDITEM, 
		"Name=columns[64][searchable]", "Value=true", ENDITEM, 
		"Name=columns[64][orderable]", "Value=true", ENDITEM, 
		"Name=columns[64][search][value]", "Value=", ENDITEM, 
		"Name=columns[64][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[65][data]", "Value=caseCreatedDate", ENDITEM, 
		"Name=columns[65][name]", "Value=caseCreatedDate", ENDITEM, 
		"Name=columns[65][searchable]", "Value=true", ENDITEM, 
		"Name=columns[65][orderable]", "Value=true", ENDITEM, 
		"Name=columns[65][search][value]", "Value=", ENDITEM, 
		"Name=columns[65][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[66][data]", "Value=reporters", ENDITEM, 
		"Name=columns[66][name]", "Value=reporters.organization", ENDITEM, 
		"Name=columns[66][searchable]", "Value=true", ENDITEM, 
		"Name=columns[66][orderable]", "Value=true", ENDITEM, 
		"Name=columns[66][search][value]", "Value=", ENDITEM, 
		"Name=columns[66][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[67][data]", "Value=reporters", ENDITEM, 
		"Name=columns[67][name]", "Value=reporters.department", ENDITEM, 
		"Name=columns[67][searchable]", "Value=true", ENDITEM, 
		"Name=columns[67][orderable]", "Value=true", ENDITEM, 
		"Name=columns[67][search][value]", "Value=", ENDITEM, 
		"Name=columns[67][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[68][data]", "Value=reporters", ENDITEM, 
		"Name=columns[68][name]", "Value=reporters.address", ENDITEM, 
		"Name=columns[68][searchable]", "Value=true", ENDITEM, 
		"Name=columns[68][orderable]", "Value=true", ENDITEM, 
		"Name=columns[68][search][value]", "Value=", ENDITEM, 
		"Name=columns[68][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[69][data]", "Value=reporters", ENDITEM, 
		"Name=columns[69][name]", "Value=reporters.telephone", ENDITEM, 
		"Name=columns[69][searchable]", "Value=true", ENDITEM, 
		"Name=columns[69][orderable]", "Value=true", ENDITEM, 
		"Name=columns[69][search][value]", "Value=", ENDITEM, 
		"Name=columns[69][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[70][data]", "Value=reporters", ENDITEM, 
		"Name=columns[70][name]", "Value=reporters.faxNumber", ENDITEM, 
		"Name=columns[70][searchable]", "Value=true", ENDITEM, 
		"Name=columns[70][orderable]", "Value=true", ENDITEM, 
		"Name=columns[70][search][value]", "Value=", ENDITEM, 
		"Name=columns[70][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[71][data]", "Value=reporters", ENDITEM, 
		"Name=columns[71][name]", "Value=reporters.email", ENDITEM, 
		"Name=columns[71][searchable]", "Value=true", ENDITEM, 
		"Name=columns[71][orderable]", "Value=true", ENDITEM, 
		"Name=columns[71][search][value]", "Value=", ENDITEM, 
		"Name=columns[71][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[72][data]", "Value=pqcCaseNumber", ENDITEM, 
		"Name=columns[72][name]", "Value=pqcCaseNumber", ENDITEM, 
		"Name=columns[72][searchable]", "Value=true", ENDITEM, 
		"Name=columns[72][orderable]", "Value=true", ENDITEM, 
		"Name=columns[72][search][value]", "Value=", ENDITEM, 
		"Name=columns[72][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[73][data]", "Value=returnRequired", ENDITEM, 
		"Name=columns[73][name]", "Value=returnRequired", ENDITEM, 
		"Name=columns[73][searchable]", "Value=true", ENDITEM, 
		"Name=columns[73][orderable]", "Value=true", ENDITEM, 
		"Name=columns[73][search][value]", "Value=", ENDITEM, 
		"Name=columns[73][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[74][data]", "Value=refundRequested", ENDITEM, 
		"Name=columns[74][name]", "Value=refundRequested", ENDITEM, 
		"Name=columns[74][searchable]", "Value=true", ENDITEM, 
		"Name=columns[74][orderable]", "Value=true", ENDITEM, 
		"Name=columns[74][search][value]", "Value=", ENDITEM, 
		"Name=columns[74][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[75][data]", "Value=reporters", ENDITEM, 
		"Name=columns[75][name]", "Value=reporters.contactTypes.value", ENDITEM, 
		"Name=columns[75][searchable]", "Value=true", ENDITEM, 
		"Name=columns[75][orderable]", "Value=false", ENDITEM, 
		"Name=columns[75][search][value]", "Value=", ENDITEM, 
		"Name=columns[75][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[76][data]", "Value=action", ENDITEM, 
		"Name=columns[76][name]", "Value=", ENDITEM, 
		"Name=columns[76][searchable]", "Value=true", ENDITEM, 
		"Name=columns[76][orderable]", "Value=false", ENDITEM, 
		"Name=columns[76][search][value]", "Value=", ENDITEM, 
		"Name=columns[76][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=3", ENDITEM, 
		"Name=order[0][dir]", "Value=desc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=5", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=loadData", "Value=true", ENDITEM, 
		LAST);

	web_url("viewAction.hbs", 
		"URL={PVI_URL}/assets/common/hbs-templates/viewAction.hbs", 
		"Resource=1", 
		"Referer={PVI_URL}/", 
		"Snapshot=t69.inf", 
		LAST);

	web_url("getActionViewList", 
		"URL={PVI_URL}/case/getActionViewList?pageId=2&sourceDbId=1&_=1598849106015", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/", 
		"Snapshot=t70.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FUDiFFView_03_NavigateToPVIntake",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("FUDiFFView_04_CaseList");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Case List",
		LAST);

	web_url("list", 
		"URL={PVI_URL}/case/list", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/", 
		"Snapshot=t71.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("list-24eb5f840484c7ed5a76f95c9fe17ba2.css", 
		"URL={PVI_URL}/assets/list/list-24eb5f840484c7ed5a76f95c9fe17ba2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t72.inf", 
		LAST);

	web_url("list-manifest-185621e31c59b25205353c6a318d5899.js", 
		"URL={PVI_URL}/assets/app/list/list-manifest-185621e31c59b25205353c6a318d5899.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t73.inf", 
		LAST);

//	web_concurrent_end(NULL);
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("en-US.json_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/en-US.json?_=1598849168689", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t74.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("predefinedSearch.json_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/predefinedSearch.json?_=1598849168690", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t75.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("contextMenuTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/contextMenuTemplate.html?_=1598849168693", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t76.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("redactionReason.json_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/redactionReason.json?_=1598849168691", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t77.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("esignOverlayTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/esignOverlayTemplate.html?_=1598849168696", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t78.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("downloadOverlayTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/downloadOverlayTemplate.html?_=1598849168695", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t79.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("pageRedactionOverlayTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/pageRedactionOverlayTemplate.html?_=1598849168700", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t80.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("hyperlinkMenuTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/hyperlinkMenuTemplate.html?_=1598849168697", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t81.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("overwriteOverlayTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/overwriteOverlayTemplate.html?_=1598849168699", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t82.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("imageStampOverlayTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/imageStampOverlayTemplate.html?_=1598849168698", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t83.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("printOverlayTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printOverlayTemplate.html?_=1598849168701", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t84.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("printTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printTemplate.html?_=1598849168702", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t85.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("redactionReasonTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/redactionReasonTemplate.html?_=1598849168703", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t86.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("unsavedChangesOverlayTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/unsavedChangesOverlayTemplate.html?_=1598849168704", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t87.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("viewerTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/viewerTemplate.html?_=1598849168705", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t88.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("1_3", 
		"URL={PVI_URL}/case/rest/list_columns/1?_=1598849168706", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t89.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("loadServerTime_2", 
		"URL={PVI_URL}/config/loadServerTime?_=1598849168707", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t90.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("commentTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/commentTemplate.html?_=1598849168692", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t91.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("copyOverlayTemplate.html_2", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/copyOverlayTemplate.html?_=1598849168694", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t92.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_concurrent_end(NULL);

	web_add_auto_header("Origin", 
		"{PVI_URL}");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Token_Id2}");
	
	web_concurrent_start(NULL);

	web_submit_data("loadState_3", 
		"Action={PVI_URL}/user/loadState", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t93.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=pageType", "Value=case_list_form", ENDITEM, 
		"Name=section", "Value=DataTable", ENDITEM, 
		LAST);

	web_submit_data("saveState", 
		"Action={PVI_URL}/user/saveState", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t94.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=data", "Value={\"time\":1598849174343,\"start\":0,\"length\":25,\"order\":[[3,\"desc\"]],\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true},\"columns\":[{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}"
		"},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible"
		"\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"{\\\"simpleSearch\\\":\\\"\\\",\\\"caseStateId\\\":\\\"2,3,4,6\\\",\\\"config\\\":\\\"{\\\\\\\"isOrOperation\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"sortWhileSearch\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"countSearchCriteria\\\\\\\": \\\\\\\"false\\\\\\\"}\\\",\\\"reportDistributionThreshold\\\":true,\\\"sourceDbId\\\":\\\"1\\\",\\\"firstReceiptDate\\\":\\\"{\\\\\\\"gte\\\\\\\":\\\\\\\"2019-08-30T00:00:00Z\\\\\\\",\\\\\\\"lte\\\\\\\":\\\\\\\"2020-08-28T23:59:59Z\\\\\\\"}\\\"}\",\"smart"
		"\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":"
		"{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}}],\"ColReorder\":[0,1,2,3,35,33,6,5,7,10,39,12,4,8,9,11,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,34,36,37,38,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76]}", ENDITEM, 
		"Name=pageType", "Value=case_list_form", ENDITEM, 
		"Name=section", "Value=DataTable", ENDITEM, 
		LAST);

	web_submit_data("saveState_2", 
		"Action={PVI_URL}/user/saveState", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t95.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=data", "Value={\"time\":1598849174258,\"start\":0,\"length\":25,\"order\":[[3,\"desc\"]],\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true},\"columns\":[{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}"
		"},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible"
		"\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"{\\\"simpleSearch\\\":\\\"\\\",\\\"caseStateId\\\":\\\"2,3,4,6\\\",\\\"config\\\":\\\"{\\\\\\\"isOrOperation\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"sortWhileSearch\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"countSearchCriteria\\\\\\\": \\\\\\\"false\\\\\\\"}\\\",\\\"reportDistributionThreshold\\\":true,\\\"sourceDbId\\\":\\\"1\\\",\\\"firstReceiptDate\\\":\\\"{\\\\\\\"gte\\\\\\\":\\\\\\\"2019-08-30T00:00:00Z\\\\\\\",\\\\\\\"lte\\\\\\\":\\\\\\\"2020-08-28T23:59:59Z\\\\\\\"}\\\"}\",\"smart"
		"\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":"
		"{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}}],\"ColReorder\":[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76]}", ENDITEM, 
		"Name=pageType", "Value=case_list_form", ENDITEM, 
		"Name=section", "Value=DataTable", ENDITEM, 
		LAST);

	web_submit_data("1_4", 
		"Action={PVI_URL}/case/rest/list/1", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t96.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=draw", "Value=2", ENDITEM, 
		"Name=columns[0][data]", "Value=selected", ENDITEM, 
		"Name=columns[0][name]", "Value=selected", ENDITEM, 
		"Name=columns[0][searchable]", "Value=true", ENDITEM, 
		"Name=columns[0][orderable]", "Value=false", ENDITEM, 
		"Name=columns[0][search][value]", "Value=", ENDITEM, 
		"Name=columns[0][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[1][data]", "Value=intakeCaseNumber", ENDITEM, 
		"Name=columns[1][name]", "Value=intakeCaseNumber", ENDITEM, 
		"Name=columns[1][searchable]", "Value=true", ENDITEM, 
		"Name=columns[1][orderable]", "Value=true", ENDITEM, 
		"Name=columns[1][search][value]", "Value=", ENDITEM, 
		"Name=columns[1][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[2][data]", "Value=caseVersion", ENDITEM, 
		"Name=columns[2][name]", "Value=caseVersion", ENDITEM, 
		"Name=columns[2][searchable]", "Value=true", ENDITEM, 
		"Name=columns[2][orderable]", "Value=true", ENDITEM, 
		"Name=columns[2][search][value]", "Value=", ENDITEM, 
		"Name=columns[2][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[3][data]", "Value=firstReceiptDateString", ENDITEM, 
		"Name=columns[3][name]", "Value=firstReceiptDate", ENDITEM, 
		"Name=columns[3][searchable]", "Value=true", ENDITEM, 
		"Name=columns[3][orderable]", "Value=true", ENDITEM, 
		"Name=columns[3][search][value]", "Value=", ENDITEM, 
		"Name=columns[3][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[4][data]", "Value=mostRecentReceiptDateString", ENDITEM, 
		"Name=columns[4][name]", "Value=mostRecentReceiptDate", ENDITEM, 
		"Name=columns[4][searchable]", "Value=true", ENDITEM, 
		"Name=columns[4][orderable]", "Value=true", ENDITEM, 
		"Name=columns[4][search][value]", "Value=", ENDITEM, 
		"Name=columns[4][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[5][data]", "Value=sourceType", ENDITEM, 
		"Name=columns[5][name]", "Value=sourceType.type", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=products", ENDITEM, 
		"Name=columns[6][name]", "Value=products.name", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=false", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=events", ENDITEM, 
		"Name=columns[7][name]", "Value=events.eventName", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=false", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=caseSeriousness", ENDITEM, 
		"Name=columns[8][name]", "Value=caseSeriousness.category", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=dueDateString", ENDITEM, 
		"Name=columns[9][name]", "Value=dueDate", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=caseState", ENDITEM, 
		"Name=columns[10][name]", "Value=caseState", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=assignedToUsername", ENDITEM, 
		"Name=columns[11][name]", "Value=assignedToUsername", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=reporterQualification", ENDITEM, 
		"Name=columns[12][name]", "Value=reporters.qualificationValue", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=true", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=priority", ENDITEM, 
		"Name=columns[13][name]", "Value=priority.value", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=attachments", ENDITEM, 
		"Name=columns[14][name]", "Value=attachments.name", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=false", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=isRelated", ENDITEM, 
		"Name=columns[15][name]", "Value=isRelated", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=true", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=safetyCaseNumber", ENDITEM, 
		"Name=columns[16][name]", "Value=safetyCaseNumber", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=reportType", ENDITEM, 
		"Name=columns[17][name]", "Value=reportType", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=true", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[18][name]", "Value=patientAge", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=false", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=gender", ENDITEM, 
		"Name=columns[19][name]", "Value=gender.value", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=true", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=destination", ENDITEM, 
		"Name=columns[20][name]", "Value=icsr.destination", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=true", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=reportDueDateString", ENDITEM, 
		"Name=columns[21][name]", "Value=icsr.dueDate", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=true", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=reporterComments", ENDITEM, 
		"Name=columns[22][name]", "Value=reporterComments", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=reporters", ENDITEM, 
		"Name=columns[23][name]", "Value=reporters.name", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=true", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=senderType", ENDITEM, 
		"Name=columns[24][name]", "Value=senderType.value", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=true", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=senderName", ENDITEM, 
		"Name=columns[25][name]", "Value=senderName", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=true", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=eventCountry", ENDITEM, 
		"Name=columns[26][name]", "Value=eventCountry.name", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=true", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=reportVersion", ENDITEM, 
		"Name=columns[27][name]", "Value=icsr.reportVersion", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=true", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=icsr", ENDITEM, 
		"Name=columns[28][name]", "Value=icsr.transmissionStatus", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=true", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=stateTimestampString", ENDITEM, 
		"Name=columns[29][name]", "Value=icsr.stateTimestamp", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=true", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=reportMessage", ENDITEM, 
		"Name=columns[30][name]", "Value=icsr.reportMessage", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=false", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=eventName", ENDITEM, 
		"Name=columns[31][name]", "Value=eventName", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=eventStartDate", ENDITEM, 
		"Name=columns[32][name]", "Value=eventStartDate", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=outcome", ENDITEM, 
		"Name=columns[33][name]", "Value=outcome.value", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=reporterCountry", ENDITEM, 
		"Name=columns[34][name]", "Value=reporters.countryName", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=relatednessString", ENDITEM, 
		"Name=columns[35][name]", "Value=relatednessString", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=categories", ENDITEM, 
		"Name=columns[36][name]", "Value=categories.value", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=false", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[37][data]", "Value=productName", ENDITEM, 
		"Name=columns[37][name]", "Value=productName", ENDITEM, 
		"Name=columns[37][searchable]", "Value=true", ENDITEM, 
		"Name=columns[37][orderable]", "Value=true", ENDITEM, 
		"Name=columns[37][search][value]", "Value=", ENDITEM, 
		"Name=columns[37][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[38][data]", "Value=substances", ENDITEM, 
		"Name=columns[38][name]", "Value=substances.nameValue", ENDITEM, 
		"Name=columns[38][searchable]", "Value=true", ENDITEM, 
		"Name=columns[38][orderable]", "Value=false", ENDITEM, 
		"Name=columns[38][search][value]", "Value=", ENDITEM, 
		"Name=columns[38][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[39][data]", "Value=studyNumber", ENDITEM, 
		"Name=columns[39][name]", "Value=studyNumber", ENDITEM, 
		"Name=columns[39][searchable]", "Value=true", ENDITEM, 
		"Name=columns[39][orderable]", "Value=true", ENDITEM, 
		"Name=columns[39][search][value]", "Value=", ENDITEM, 
		"Name=columns[39][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[40][data]", "Value=versionType", ENDITEM, 
		"Name=columns[40][name]", "Value=versionType.value", ENDITEM, 
		"Name=columns[40][searchable]", "Value=true", ENDITEM, 
		"Name=columns[40][orderable]", "Value=true", ENDITEM, 
		"Name=columns[40][search][value]", "Value=", ENDITEM, 
		"Name=columns[40][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[41][data]", "Value=receiptDateString", ENDITEM, 
		"Name=columns[41][name]", "Value=receiptDate", ENDITEM, 
		"Name=columns[41][searchable]", "Value=true", ENDITEM, 
		"Name=columns[41][orderable]", "Value=false", ENDITEM, 
		"Name=columns[41][search][value]", "Value=", ENDITEM, 
		"Name=columns[41][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[42][data]", "Value=onsetDate", ENDITEM, 
		"Name=columns[42][name]", "Value=onsetDate", ENDITEM, 
		"Name=columns[42][searchable]", "Value=true", ENDITEM, 
		"Name=columns[42][orderable]", "Value=true", ENDITEM, 
		"Name=columns[42][search][value]", "Value=", ENDITEM, 
		"Name=columns[42][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[43][data]", "Value=submissionDate", ENDITEM, 
		"Name=columns[43][name]", "Value=submissionDate", ENDITEM, 
		"Name=columns[43][searchable]", "Value=true", ENDITEM, 
		"Name=columns[43][orderable]", "Value=true", ENDITEM, 
		"Name=columns[43][search][value]", "Value=", ENDITEM, 
		"Name=columns[43][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[44][data]", "Value=dosageForm", ENDITEM, 
		"Name=columns[44][name]", "Value=dosageForm.value", ENDITEM, 
		"Name=columns[44][searchable]", "Value=true", ENDITEM, 
		"Name=columns[44][orderable]", "Value=true", ENDITEM, 
		"Name=columns[44][search][value]", "Value=", ENDITEM, 
		"Name=columns[44][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[45][data]", "Value=caseVersionType", ENDITEM, 
		"Name=columns[45][name]", "Value=caseVersionType", ENDITEM, 
		"Name=columns[45][searchable]", "Value=true", ENDITEM, 
		"Name=columns[45][orderable]", "Value=true", ENDITEM, 
		"Name=columns[45][search][value]", "Value=", ENDITEM, 
		"Name=columns[45][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[46][data]", "Value=icsrType", ENDITEM, 
		"Name=columns[46][name]", "Value=icsr.type", ENDITEM, 
		"Name=columns[46][searchable]", "Value=true", ENDITEM, 
		"Name=columns[46][orderable]", "Value=true", ENDITEM, 
		"Name=columns[46][search][value]", "Value=", ENDITEM, 
		"Name=columns[46][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[47][data]", "Value=studyType", ENDITEM, 
		"Name=columns[47][name]", "Value=studyType.value", ENDITEM, 
		"Name=columns[47][searchable]", "Value=true", ENDITEM, 
		"Name=columns[47][orderable]", "Value=true", ENDITEM, 
		"Name=columns[47][search][value]", "Value=", ENDITEM, 
		"Name=columns[47][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[48][data]", "Value=patientName", ENDITEM, 
		"Name=columns[48][name]", "Value=patientName", ENDITEM, 
		"Name=columns[48][searchable]", "Value=true", ENDITEM, 
		"Name=columns[48][orderable]", "Value=true", ENDITEM, 
		"Name=columns[48][search][value]", "Value=", ENDITEM, 
		"Name=columns[48][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[49][data]", "Value=seriousness", ENDITEM, 
		"Name=columns[49][name]", "Value=seriousnessString", ENDITEM, 
		"Name=columns[49][searchable]", "Value=true", ENDITEM, 
		"Name=columns[49][orderable]", "Value=false", ENDITEM, 
		"Name=columns[49][search][value]", "Value=", ENDITEM, 
		"Name=columns[49][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[50][data]", "Value=caseCountry", ENDITEM, 
		"Name=columns[50][name]", "Value=caseCountry.name", ENDITEM, 
		"Name=columns[50][searchable]", "Value=true", ENDITEM, 
		"Name=columns[50][orderable]", "Value=true", ENDITEM, 
		"Name=columns[50][search][value]", "Value=", ENDITEM, 
		"Name=columns[50][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[51][data]", "Value=allReferences", ENDITEM, 
		"Name=columns[51][name]", "Value=allReferences", ENDITEM, 
		"Name=columns[51][searchable]", "Value=true", ENDITEM, 
		"Name=columns[51][orderable]", "Value=false", ENDITEM, 
		"Name=columns[51][search][value]", "Value=", ENDITEM, 
		"Name=columns[51][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[52][data]", "Value=patientId", ENDITEM, 
		"Name=columns[52][name]", "Value=patientId", ENDITEM, 
		"Name=columns[52][searchable]", "Value=true", ENDITEM, 
		"Name=columns[52][orderable]", "Value=true", ENDITEM, 
		"Name=columns[52][search][value]", "Value=", ENDITEM, 
		"Name=columns[52][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[53][data]", "Value=dobString", ENDITEM, 
		"Name=columns[53][name]", "Value=dob", ENDITEM, 
		"Name=columns[53][searchable]", "Value=true", ENDITEM, 
		"Name=columns[53][orderable]", "Value=true", ENDITEM, 
		"Name=columns[53][search][value]", "Value=", ENDITEM, 
		"Name=columns[53][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[54][data]", "Value=matchScore", ENDITEM, 
		"Name=columns[54][name]", "Value=matchScore", ENDITEM, 
		"Name=columns[54][searchable]", "Value=true", ENDITEM, 
		"Name=columns[54][orderable]", "Value=true", ENDITEM, 
		"Name=columns[54][search][value]", "Value=", ENDITEM, 
		"Name=columns[54][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[55][data]", "Value=simpleSearch", ENDITEM, 
		"Name=columns[55][name]", "Value=simpleSearch", ENDITEM, 
		"Name=columns[55][searchable]", "Value=true", ENDITEM, 
		"Name=columns[55][orderable]", "Value=true", ENDITEM, 
		"Name=columns[55][search][value]", "Value={\"simpleSearch\":\"\",\"caseStateId\":\"2,3,4,6\",\"config\":\"{\\\"isOrOperation\\\": \\\"false\\\", \\\"sortWhileSearch\\\": \\\"false\\\", \\\"countSearchCriteria\\\": \\\"false\\\"}\",\"reportDistributionThreshold\":true,\"sourceDbId\":\"1\",\"firstReceiptDate\":\"{\\\"gte\\\":\\\"2019-08-30T00:00:00Z\\\",\\\"lte\\\":\\\"2020-08-28T23:59:59Z\\\"}\"}", ENDITEM, 
		"Name=columns[55][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[56][data]", "Value=dateRangeSearch", ENDITEM, 
		"Name=columns[56][name]", "Value=dateRangeSearch", ENDITEM, 
		"Name=columns[56][searchable]", "Value=true", ENDITEM, 
		"Name=columns[56][orderable]", "Value=true", ENDITEM, 
		"Name=columns[56][search][value]", "Value=", ENDITEM, 
		"Name=columns[56][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[57][data]", "Value=sourceDb", ENDITEM, 
		"Name=columns[57][name]", "Value=sourceDb", ENDITEM, 
		"Name=columns[57][searchable]", "Value=true", ENDITEM, 
		"Name=columns[57][orderable]", "Value=true", ENDITEM, 
		"Name=columns[57][search][value]", "Value=", ENDITEM, 
		"Name=columns[57][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[58][data]", "Value=safetyWFState", ENDITEM, 
		"Name=columns[58][name]", "Value=safetyWFState", ENDITEM, 
		"Name=columns[58][searchable]", "Value=true", ENDITEM, 
		"Name=columns[58][orderable]", "Value=true", ENDITEM, 
		"Name=columns[58][search][value]", "Value=", ENDITEM, 
		"Name=columns[58][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[59][data]", "Value=centralReceiptDateString", ENDITEM, 
		"Name=columns[59][name]", "Value=centralReceiptDate", ENDITEM, 
		"Name=columns[59][searchable]", "Value=true", ENDITEM, 
		"Name=columns[59][orderable]", "Value=true", ENDITEM, 
		"Name=columns[59][search][value]", "Value=", ENDITEM, 
		"Name=columns[59][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[60][data]", "Value=localSubmissionDateString", ENDITEM, 
		"Name=columns[60][name]", "Value=localSubmissionDate", ENDITEM, 
		"Name=columns[60][searchable]", "Value=true", ENDITEM, 
		"Name=columns[60][orderable]", "Value=true", ENDITEM, 
		"Name=columns[60][search][value]", "Value=", ENDITEM, 
		"Name=columns[60][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[61][data]", "Value=localSubmissionDueDateString", ENDITEM, 
		"Name=columns[61][name]", "Value=localSubmissionDueDate", ENDITEM, 
		"Name=columns[61][searchable]", "Value=true", ENDITEM, 
		"Name=columns[61][orderable]", "Value=true", ENDITEM, 
		"Name=columns[61][search][value]", "Value=", ENDITEM, 
		"Name=columns[61][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[62][data]", "Value=latestAssignmentComment", ENDITEM, 
		"Name=columns[62][name]", "Value=latestAssignmentComment", ENDITEM, 
		"Name=columns[62][searchable]", "Value=true", ENDITEM, 
		"Name=columns[62][orderable]", "Value=false", ENDITEM, 
		"Name=columns[62][search][value]", "Value=", ENDITEM, 
		"Name=columns[62][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[63][data]", "Value=vendor", ENDITEM, 
		"Name=columns[63][name]", "Value=vendor", ENDITEM, 
		"Name=columns[63][searchable]", "Value=true", ENDITEM, 
		"Name=columns[63][orderable]", "Value=true", ENDITEM, 
		"Name=columns[63][search][value]", "Value=", ENDITEM, 
		"Name=columns[63][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[64][data]", "Value=replacementRequired", ENDITEM, 
		"Name=columns[64][name]", "Value=replacementRequired", ENDITEM, 
		"Name=columns[64][searchable]", "Value=true", ENDITEM, 
		"Name=columns[64][orderable]", "Value=true", ENDITEM, 
		"Name=columns[64][search][value]", "Value=", ENDITEM, 
		"Name=columns[64][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[65][data]", "Value=caseCreatedDate", ENDITEM, 
		"Name=columns[65][name]", "Value=caseCreatedDate", ENDITEM, 
		"Name=columns[65][searchable]", "Value=true", ENDITEM, 
		"Name=columns[65][orderable]", "Value=true", ENDITEM, 
		"Name=columns[65][search][value]", "Value=", ENDITEM, 
		"Name=columns[65][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[66][data]", "Value=reporters", ENDITEM, 
		"Name=columns[66][name]", "Value=reporters.organization", ENDITEM, 
		"Name=columns[66][searchable]", "Value=true", ENDITEM, 
		"Name=columns[66][orderable]", "Value=true", ENDITEM, 
		"Name=columns[66][search][value]", "Value=", ENDITEM, 
		"Name=columns[66][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[67][data]", "Value=reporters", ENDITEM, 
		"Name=columns[67][name]", "Value=reporters.department", ENDITEM, 
		"Name=columns[67][searchable]", "Value=true", ENDITEM, 
		"Name=columns[67][orderable]", "Value=true", ENDITEM, 
		"Name=columns[67][search][value]", "Value=", ENDITEM, 
		"Name=columns[67][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[68][data]", "Value=reporters", ENDITEM, 
		"Name=columns[68][name]", "Value=reporters.address", ENDITEM, 
		"Name=columns[68][searchable]", "Value=true", ENDITEM, 
		"Name=columns[68][orderable]", "Value=true", ENDITEM, 
		"Name=columns[68][search][value]", "Value=", ENDITEM, 
		"Name=columns[68][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[69][data]", "Value=reporters", ENDITEM, 
		"Name=columns[69][name]", "Value=reporters.telephone", ENDITEM, 
		"Name=columns[69][searchable]", "Value=true", ENDITEM, 
		"Name=columns[69][orderable]", "Value=true", ENDITEM, 
		"Name=columns[69][search][value]", "Value=", ENDITEM, 
		"Name=columns[69][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[70][data]", "Value=reporters", ENDITEM, 
		"Name=columns[70][name]", "Value=reporters.faxNumber", ENDITEM, 
		"Name=columns[70][searchable]", "Value=true", ENDITEM, 
		"Name=columns[70][orderable]", "Value=true", ENDITEM, 
		"Name=columns[70][search][value]", "Value=", ENDITEM, 
		"Name=columns[70][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[71][data]", "Value=reporters", ENDITEM, 
		"Name=columns[71][name]", "Value=reporters.email", ENDITEM, 
		"Name=columns[71][searchable]", "Value=true", ENDITEM, 
		"Name=columns[71][orderable]", "Value=true", ENDITEM, 
		"Name=columns[71][search][value]", "Value=", ENDITEM, 
		"Name=columns[71][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[72][data]", "Value=pqcCaseNumber", ENDITEM, 
		"Name=columns[72][name]", "Value=pqcCaseNumber", ENDITEM, 
		"Name=columns[72][searchable]", "Value=true", ENDITEM, 
		"Name=columns[72][orderable]", "Value=true", ENDITEM, 
		"Name=columns[72][search][value]", "Value=", ENDITEM, 
		"Name=columns[72][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[73][data]", "Value=returnRequired", ENDITEM, 
		"Name=columns[73][name]", "Value=returnRequired", ENDITEM, 
		"Name=columns[73][searchable]", "Value=true", ENDITEM, 
		"Name=columns[73][orderable]", "Value=true", ENDITEM, 
		"Name=columns[73][search][value]", "Value=", ENDITEM, 
		"Name=columns[73][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[74][data]", "Value=refundRequested", ENDITEM, 
		"Name=columns[74][name]", "Value=refundRequested", ENDITEM, 
		"Name=columns[74][searchable]", "Value=true", ENDITEM, 
		"Name=columns[74][orderable]", "Value=true", ENDITEM, 
		"Name=columns[74][search][value]", "Value=", ENDITEM, 
		"Name=columns[74][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[75][data]", "Value=reporters", ENDITEM, 
		"Name=columns[75][name]", "Value=reporters.contactTypes.value", ENDITEM, 
		"Name=columns[75][searchable]", "Value=true", ENDITEM, 
		"Name=columns[75][orderable]", "Value=false", ENDITEM, 
		"Name=columns[75][search][value]", "Value=", ENDITEM, 
		"Name=columns[75][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[76][data]", "Value=action", ENDITEM, 
		"Name=columns[76][name]", "Value=", ENDITEM, 
		"Name=columns[76][searchable]", "Value=true", ENDITEM, 
		"Name=columns[76][orderable]", "Value=false", ENDITEM, 
		"Name=columns[76][search][value]", "Value=", ENDITEM, 
		"Name=columns[76][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=3", ENDITEM, 
		"Name=order[0][dir]", "Value=desc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=25", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=loadData", "Value=true", ENDITEM, 
		LAST);

//	web_revert_auto_header("Origin");
//
//	web_revert_auto_header("X-CSRF-TOKEN");

	web_url("getActionViewList_2", 
		"URL={PVI_URL}/case/getActionViewList?pageId=1&sourceDbId=1&_=1598849168708", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_concurrent_end(NULL);

	lr_end_transaction("FUDiFFView_04_CaseList",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("FUDiFFView_SearchCase");

	web_add_auto_header("Origin", 
		"{PVI_URL}");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Token_Id2}");

	web_custom_request("saveState_3", 
		"URL={PVI_URL}/user/saveState", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t98.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=data="
		"%7B%22form.case_list_form%3Einput%22%3A%22{CaseNo}%22%2C%22form.case_list_form%3Eselect.date-range-type.persisting%22%3A%22firstReceiptDate%22%2C%22form.case_list_form%3Eselect.pviListDateRange.persisting%22%3A%22LAST_X_DAYS%22%2C%22form.case_list_form%3Einput.range-factor-field.persisting%22%3A%22365%22%2C%22form.case_list_form%3Einput.datepicker-rangeStartDate.persisting%22%3A%22%22%2C%22form.case_list_form%3Einput.datepicker-rangeEndDate.persisting%22%3A%22%22%2C%22form.case_list_form%3Ediv%"
		"3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Einput.2-0%22%3A%22checked%22%2C%22form.case_list_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(1)%3Einput.3-1%22%3A%22checked%22%2C%22form.case_list_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(2)%3Einput.4-2%22%3A%22checked%22%2C%22form.case_list_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(3)%3Einput.11-3%22%3A%22unchecked%22%2C%22form.case_list_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(4)"
		"%3Einput.7-4%22%3A%22unchecked%22%2C%22form.case_list_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(5)%3Einput.5-5%22%3A%22unchecked%22%2C%22form.case_list_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(6)%3Einput.6-6%22%3A%22checked%22%2C%22form.case_list_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(7)%3Einput.report-distribution%22%3A%22checked%22%7D&pageType=case_list_form&section=FORM_STATE", 
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='244675' 
Name ='CorrelationParameter' 
Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=CorrelationParameter",
		"LB/IC=selected\":\"\",\"id\":",
		"RB/IC=,\"intakeCaseNumber",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_reg_find("Search=Body",
		"Text={CaseNo}",
		LAST);

	web_submit_data("1_5", 
		"Action={PVI_URL}/case/rest/list/1", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=draw", "Value=3", ENDITEM, 
		"Name=columns[0][data]", "Value=selected", ENDITEM, 
		"Name=columns[0][name]", "Value=selected", ENDITEM, 
		"Name=columns[0][searchable]", "Value=true", ENDITEM, 
		"Name=columns[0][orderable]", "Value=false", ENDITEM, 
		"Name=columns[0][search][value]", "Value=", ENDITEM, 
		"Name=columns[0][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[1][data]", "Value=intakeCaseNumber", ENDITEM, 
		"Name=columns[1][name]", "Value=intakeCaseNumber", ENDITEM, 
		"Name=columns[1][searchable]", "Value=true", ENDITEM, 
		"Name=columns[1][orderable]", "Value=true", ENDITEM, 
		"Name=columns[1][search][value]", "Value=", ENDITEM, 
		"Name=columns[1][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[2][data]", "Value=caseVersion", ENDITEM, 
		"Name=columns[2][name]", "Value=caseVersion", ENDITEM, 
		"Name=columns[2][searchable]", "Value=true", ENDITEM, 
		"Name=columns[2][orderable]", "Value=true", ENDITEM, 
		"Name=columns[2][search][value]", "Value=", ENDITEM, 
		"Name=columns[2][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[3][data]", "Value=firstReceiptDateString", ENDITEM, 
		"Name=columns[3][name]", "Value=firstReceiptDate", ENDITEM, 
		"Name=columns[3][searchable]", "Value=true", ENDITEM, 
		"Name=columns[3][orderable]", "Value=true", ENDITEM, 
		"Name=columns[3][search][value]", "Value=", ENDITEM, 
		"Name=columns[3][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[4][data]", "Value=mostRecentReceiptDateString", ENDITEM, 
		"Name=columns[4][name]", "Value=mostRecentReceiptDate", ENDITEM, 
		"Name=columns[4][searchable]", "Value=true", ENDITEM, 
		"Name=columns[4][orderable]", "Value=true", ENDITEM, 
		"Name=columns[4][search][value]", "Value=", ENDITEM, 
		"Name=columns[4][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[5][data]", "Value=sourceType", ENDITEM, 
		"Name=columns[5][name]", "Value=sourceType.type", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=products", ENDITEM, 
		"Name=columns[6][name]", "Value=products.name", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=false", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=events", ENDITEM, 
		"Name=columns[7][name]", "Value=events.eventName", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=false", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=caseSeriousness", ENDITEM, 
		"Name=columns[8][name]", "Value=caseSeriousness.category", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=dueDateString", ENDITEM, 
		"Name=columns[9][name]", "Value=dueDate", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=caseState", ENDITEM, 
		"Name=columns[10][name]", "Value=caseState", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=assignedToUsername", ENDITEM, 
		"Name=columns[11][name]", "Value=assignedToUsername", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=reporterQualification", ENDITEM, 
		"Name=columns[12][name]", "Value=reporters.qualificationValue", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=true", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=priority", ENDITEM, 
		"Name=columns[13][name]", "Value=priority.value", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=attachments", ENDITEM, 
		"Name=columns[14][name]", "Value=attachments.name", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=false", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=isRelated", ENDITEM, 
		"Name=columns[15][name]", "Value=isRelated", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=true", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=safetyCaseNumber", ENDITEM, 
		"Name=columns[16][name]", "Value=safetyCaseNumber", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=reportType", ENDITEM, 
		"Name=columns[17][name]", "Value=reportType", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=true", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[18][name]", "Value=patientAge", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=false", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=gender", ENDITEM, 
		"Name=columns[19][name]", "Value=gender.value", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=true", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=destination", ENDITEM, 
		"Name=columns[20][name]", "Value=icsr.destination", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=true", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=reportDueDateString", ENDITEM, 
		"Name=columns[21][name]", "Value=icsr.dueDate", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=true", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=reporterComments", ENDITEM, 
		"Name=columns[22][name]", "Value=reporterComments", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=reporters", ENDITEM, 
		"Name=columns[23][name]", "Value=reporters.name", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=true", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=senderType", ENDITEM, 
		"Name=columns[24][name]", "Value=senderType.value", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=true", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=senderName", ENDITEM, 
		"Name=columns[25][name]", "Value=senderName", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=true", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=eventCountry", ENDITEM, 
		"Name=columns[26][name]", "Value=eventCountry.name", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=true", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=reportVersion", ENDITEM, 
		"Name=columns[27][name]", "Value=icsr.reportVersion", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=true", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=icsr", ENDITEM, 
		"Name=columns[28][name]", "Value=icsr.transmissionStatus", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=true", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=stateTimestampString", ENDITEM, 
		"Name=columns[29][name]", "Value=icsr.stateTimestamp", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=true", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=reportMessage", ENDITEM, 
		"Name=columns[30][name]", "Value=icsr.reportMessage", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=false", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=eventName", ENDITEM, 
		"Name=columns[31][name]", "Value=eventName", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=eventStartDate", ENDITEM, 
		"Name=columns[32][name]", "Value=eventStartDate", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=outcome", ENDITEM, 
		"Name=columns[33][name]", "Value=outcome.value", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=reporterCountry", ENDITEM, 
		"Name=columns[34][name]", "Value=reporters.countryName", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=relatednessString", ENDITEM, 
		"Name=columns[35][name]", "Value=relatednessString", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=categories", ENDITEM, 
		"Name=columns[36][name]", "Value=categories.value", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=false", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[37][data]", "Value=productName", ENDITEM, 
		"Name=columns[37][name]", "Value=productName", ENDITEM, 
		"Name=columns[37][searchable]", "Value=true", ENDITEM, 
		"Name=columns[37][orderable]", "Value=true", ENDITEM, 
		"Name=columns[37][search][value]", "Value=", ENDITEM, 
		"Name=columns[37][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[38][data]", "Value=substances", ENDITEM, 
		"Name=columns[38][name]", "Value=substances.nameValue", ENDITEM, 
		"Name=columns[38][searchable]", "Value=true", ENDITEM, 
		"Name=columns[38][orderable]", "Value=false", ENDITEM, 
		"Name=columns[38][search][value]", "Value=", ENDITEM, 
		"Name=columns[38][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[39][data]", "Value=studyNumber", ENDITEM, 
		"Name=columns[39][name]", "Value=studyNumber", ENDITEM, 
		"Name=columns[39][searchable]", "Value=true", ENDITEM, 
		"Name=columns[39][orderable]", "Value=true", ENDITEM, 
		"Name=columns[39][search][value]", "Value=", ENDITEM, 
		"Name=columns[39][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[40][data]", "Value=versionType", ENDITEM, 
		"Name=columns[40][name]", "Value=versionType.value", ENDITEM, 
		"Name=columns[40][searchable]", "Value=true", ENDITEM, 
		"Name=columns[40][orderable]", "Value=true", ENDITEM, 
		"Name=columns[40][search][value]", "Value=", ENDITEM, 
		"Name=columns[40][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[41][data]", "Value=receiptDateString", ENDITEM, 
		"Name=columns[41][name]", "Value=receiptDate", ENDITEM, 
		"Name=columns[41][searchable]", "Value=true", ENDITEM, 
		"Name=columns[41][orderable]", "Value=false", ENDITEM, 
		"Name=columns[41][search][value]", "Value=", ENDITEM, 
		"Name=columns[41][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[42][data]", "Value=onsetDate", ENDITEM, 
		"Name=columns[42][name]", "Value=onsetDate", ENDITEM, 
		"Name=columns[42][searchable]", "Value=true", ENDITEM, 
		"Name=columns[42][orderable]", "Value=true", ENDITEM, 
		"Name=columns[42][search][value]", "Value=", ENDITEM, 
		"Name=columns[42][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[43][data]", "Value=submissionDate", ENDITEM, 
		"Name=columns[43][name]", "Value=submissionDate", ENDITEM, 
		"Name=columns[43][searchable]", "Value=true", ENDITEM, 
		"Name=columns[43][orderable]", "Value=true", ENDITEM, 
		"Name=columns[43][search][value]", "Value=", ENDITEM, 
		"Name=columns[43][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[44][data]", "Value=dosageForm", ENDITEM, 
		"Name=columns[44][name]", "Value=dosageForm.value", ENDITEM, 
		"Name=columns[44][searchable]", "Value=true", ENDITEM, 
		"Name=columns[44][orderable]", "Value=true", ENDITEM, 
		"Name=columns[44][search][value]", "Value=", ENDITEM, 
		"Name=columns[44][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[45][data]", "Value=caseVersionType", ENDITEM, 
		"Name=columns[45][name]", "Value=caseVersionType", ENDITEM, 
		"Name=columns[45][searchable]", "Value=true", ENDITEM, 
		"Name=columns[45][orderable]", "Value=true", ENDITEM, 
		"Name=columns[45][search][value]", "Value=", ENDITEM, 
		"Name=columns[45][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[46][data]", "Value=icsrType", ENDITEM, 
		"Name=columns[46][name]", "Value=icsr.type", ENDITEM, 
		"Name=columns[46][searchable]", "Value=true", ENDITEM, 
		"Name=columns[46][orderable]", "Value=true", ENDITEM, 
		"Name=columns[46][search][value]", "Value=", ENDITEM, 
		"Name=columns[46][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[47][data]", "Value=studyType", ENDITEM, 
		"Name=columns[47][name]", "Value=studyType.value", ENDITEM, 
		"Name=columns[47][searchable]", "Value=true", ENDITEM, 
		"Name=columns[47][orderable]", "Value=true", ENDITEM, 
		"Name=columns[47][search][value]", "Value=", ENDITEM, 
		"Name=columns[47][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[48][data]", "Value=patientName", ENDITEM, 
		"Name=columns[48][name]", "Value=patientName", ENDITEM, 
		"Name=columns[48][searchable]", "Value=true", ENDITEM, 
		"Name=columns[48][orderable]", "Value=true", ENDITEM, 
		"Name=columns[48][search][value]", "Value=", ENDITEM, 
		"Name=columns[48][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[49][data]", "Value=seriousness", ENDITEM, 
		"Name=columns[49][name]", "Value=seriousnessString", ENDITEM, 
		"Name=columns[49][searchable]", "Value=true", ENDITEM, 
		"Name=columns[49][orderable]", "Value=false", ENDITEM, 
		"Name=columns[49][search][value]", "Value=", ENDITEM, 
		"Name=columns[49][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[50][data]", "Value=caseCountry", ENDITEM, 
		"Name=columns[50][name]", "Value=caseCountry.name", ENDITEM, 
		"Name=columns[50][searchable]", "Value=true", ENDITEM, 
		"Name=columns[50][orderable]", "Value=true", ENDITEM, 
		"Name=columns[50][search][value]", "Value=", ENDITEM, 
		"Name=columns[50][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[51][data]", "Value=allReferences", ENDITEM, 
		"Name=columns[51][name]", "Value=allReferences", ENDITEM, 
		"Name=columns[51][searchable]", "Value=true", ENDITEM, 
		"Name=columns[51][orderable]", "Value=false", ENDITEM, 
		"Name=columns[51][search][value]", "Value=", ENDITEM, 
		"Name=columns[51][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[52][data]", "Value=patientId", ENDITEM, 
		"Name=columns[52][name]", "Value=patientId", ENDITEM, 
		"Name=columns[52][searchable]", "Value=true", ENDITEM, 
		"Name=columns[52][orderable]", "Value=true", ENDITEM, 
		"Name=columns[52][search][value]", "Value=", ENDITEM, 
		"Name=columns[52][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[53][data]", "Value=dobString", ENDITEM, 
		"Name=columns[53][name]", "Value=dob", ENDITEM, 
		"Name=columns[53][searchable]", "Value=true", ENDITEM, 
		"Name=columns[53][orderable]", "Value=true", ENDITEM, 
		"Name=columns[53][search][value]", "Value=", ENDITEM, 
		"Name=columns[53][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[54][data]", "Value=matchScore", ENDITEM, 
		"Name=columns[54][name]", "Value=matchScore", ENDITEM, 
		"Name=columns[54][searchable]", "Value=true", ENDITEM, 
		"Name=columns[54][orderable]", "Value=true", ENDITEM, 
		"Name=columns[54][search][value]", "Value=", ENDITEM, 
		"Name=columns[54][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[55][data]", "Value=simpleSearch", ENDITEM, 
		"Name=columns[55][name]", "Value=simpleSearch", ENDITEM, 
		"Name=columns[55][searchable]", "Value=true", ENDITEM, 
		"Name=columns[55][orderable]", "Value=true", ENDITEM, 
		"Name=columns[55][search][value]", "Value={\"simpleSearch\":\"{CaseNo}\",\"caseStateId\":\"2,3,4,6\",\"config\":\"{\\\"isOrOperation\\\": \\\"false\\\", \\\"sortWhileSearch\\\": \\\"false\\\", \\\"countSearchCriteria\\\": \\\"false\\\"}\",\"reportDistributionThreshold\":true,\"sourceDbId\":\"1\",\"firstReceiptDate\":\"{\\\"gte\\\":\\\"2019-09-02T00:00:00Z\\\",\\\"lte\\\":\\\"2020-08-31T23:59:59Z\\\"}\"}", ENDITEM, 
		"Name=columns[55][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[56][data]", "Value=dateRangeSearch", ENDITEM, 
		"Name=columns[56][name]", "Value=dateRangeSearch", ENDITEM, 
		"Name=columns[56][searchable]", "Value=true", ENDITEM, 
		"Name=columns[56][orderable]", "Value=true", ENDITEM, 
		"Name=columns[56][search][value]", "Value=", ENDITEM, 
		"Name=columns[56][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[57][data]", "Value=sourceDb", ENDITEM, 
		"Name=columns[57][name]", "Value=sourceDb", ENDITEM, 
		"Name=columns[57][searchable]", "Value=true", ENDITEM, 
		"Name=columns[57][orderable]", "Value=true", ENDITEM, 
		"Name=columns[57][search][value]", "Value=", ENDITEM, 
		"Name=columns[57][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[58][data]", "Value=safetyWFState", ENDITEM, 
		"Name=columns[58][name]", "Value=safetyWFState", ENDITEM, 
		"Name=columns[58][searchable]", "Value=true", ENDITEM, 
		"Name=columns[58][orderable]", "Value=true", ENDITEM, 
		"Name=columns[58][search][value]", "Value=", ENDITEM, 
		"Name=columns[58][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[59][data]", "Value=centralReceiptDateString", ENDITEM, 
		"Name=columns[59][name]", "Value=centralReceiptDate", ENDITEM, 
		"Name=columns[59][searchable]", "Value=true", ENDITEM, 
		"Name=columns[59][orderable]", "Value=true", ENDITEM, 
		"Name=columns[59][search][value]", "Value=", ENDITEM, 
		"Name=columns[59][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[60][data]", "Value=localSubmissionDateString", ENDITEM, 
		"Name=columns[60][name]", "Value=localSubmissionDate", ENDITEM, 
		"Name=columns[60][searchable]", "Value=true", ENDITEM, 
		"Name=columns[60][orderable]", "Value=true", ENDITEM, 
		"Name=columns[60][search][value]", "Value=", ENDITEM, 
		"Name=columns[60][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[61][data]", "Value=localSubmissionDueDateString", ENDITEM, 
		"Name=columns[61][name]", "Value=localSubmissionDueDate", ENDITEM, 
		"Name=columns[61][searchable]", "Value=true", ENDITEM, 
		"Name=columns[61][orderable]", "Value=true", ENDITEM, 
		"Name=columns[61][search][value]", "Value=", ENDITEM, 
		"Name=columns[61][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[62][data]", "Value=latestAssignmentComment", ENDITEM, 
		"Name=columns[62][name]", "Value=latestAssignmentComment", ENDITEM, 
		"Name=columns[62][searchable]", "Value=true", ENDITEM, 
		"Name=columns[62][orderable]", "Value=false", ENDITEM, 
		"Name=columns[62][search][value]", "Value=", ENDITEM, 
		"Name=columns[62][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[63][data]", "Value=vendor", ENDITEM, 
		"Name=columns[63][name]", "Value=vendor", ENDITEM, 
		"Name=columns[63][searchable]", "Value=true", ENDITEM, 
		"Name=columns[63][orderable]", "Value=true", ENDITEM, 
		"Name=columns[63][search][value]", "Value=", ENDITEM, 
		"Name=columns[63][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[64][data]", "Value=replacementRequired", ENDITEM, 
		"Name=columns[64][name]", "Value=replacementRequired", ENDITEM, 
		"Name=columns[64][searchable]", "Value=true", ENDITEM, 
		"Name=columns[64][orderable]", "Value=true", ENDITEM, 
		"Name=columns[64][search][value]", "Value=", ENDITEM, 
		"Name=columns[64][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[65][data]", "Value=caseCreatedDate", ENDITEM, 
		"Name=columns[65][name]", "Value=caseCreatedDate", ENDITEM, 
		"Name=columns[65][searchable]", "Value=true", ENDITEM, 
		"Name=columns[65][orderable]", "Value=true", ENDITEM, 
		"Name=columns[65][search][value]", "Value=", ENDITEM, 
		"Name=columns[65][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[66][data]", "Value=reporters", ENDITEM, 
		"Name=columns[66][name]", "Value=reporters.organization", ENDITEM, 
		"Name=columns[66][searchable]", "Value=true", ENDITEM, 
		"Name=columns[66][orderable]", "Value=true", ENDITEM, 
		"Name=columns[66][search][value]", "Value=", ENDITEM, 
		"Name=columns[66][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[67][data]", "Value=reporters", ENDITEM, 
		"Name=columns[67][name]", "Value=reporters.department", ENDITEM, 
		"Name=columns[67][searchable]", "Value=true", ENDITEM, 
		"Name=columns[67][orderable]", "Value=true", ENDITEM, 
		"Name=columns[67][search][value]", "Value=", ENDITEM, 
		"Name=columns[67][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[68][data]", "Value=reporters", ENDITEM, 
		"Name=columns[68][name]", "Value=reporters.address", ENDITEM, 
		"Name=columns[68][searchable]", "Value=true", ENDITEM, 
		"Name=columns[68][orderable]", "Value=true", ENDITEM, 
		"Name=columns[68][search][value]", "Value=", ENDITEM, 
		"Name=columns[68][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[69][data]", "Value=reporters", ENDITEM, 
		"Name=columns[69][name]", "Value=reporters.telephone", ENDITEM, 
		"Name=columns[69][searchable]", "Value=true", ENDITEM, 
		"Name=columns[69][orderable]", "Value=true", ENDITEM, 
		"Name=columns[69][search][value]", "Value=", ENDITEM, 
		"Name=columns[69][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[70][data]", "Value=reporters", ENDITEM, 
		"Name=columns[70][name]", "Value=reporters.faxNumber", ENDITEM, 
		"Name=columns[70][searchable]", "Value=true", ENDITEM, 
		"Name=columns[70][orderable]", "Value=true", ENDITEM, 
		"Name=columns[70][search][value]", "Value=", ENDITEM, 
		"Name=columns[70][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[71][data]", "Value=reporters", ENDITEM, 
		"Name=columns[71][name]", "Value=reporters.email", ENDITEM, 
		"Name=columns[71][searchable]", "Value=true", ENDITEM, 
		"Name=columns[71][orderable]", "Value=true", ENDITEM, 
		"Name=columns[71][search][value]", "Value=", ENDITEM, 
		"Name=columns[71][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[72][data]", "Value=pqcCaseNumber", ENDITEM, 
		"Name=columns[72][name]", "Value=pqcCaseNumber", ENDITEM, 
		"Name=columns[72][searchable]", "Value=true", ENDITEM, 
		"Name=columns[72][orderable]", "Value=true", ENDITEM, 
		"Name=columns[72][search][value]", "Value=", ENDITEM, 
		"Name=columns[72][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[73][data]", "Value=returnRequired", ENDITEM, 
		"Name=columns[73][name]", "Value=returnRequired", ENDITEM, 
		"Name=columns[73][searchable]", "Value=true", ENDITEM, 
		"Name=columns[73][orderable]", "Value=true", ENDITEM, 
		"Name=columns[73][search][value]", "Value=", ENDITEM, 
		"Name=columns[73][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[74][data]", "Value=refundRequested", ENDITEM, 
		"Name=columns[74][name]", "Value=refundRequested", ENDITEM, 
		"Name=columns[74][searchable]", "Value=true", ENDITEM, 
		"Name=columns[74][orderable]", "Value=true", ENDITEM, 
		"Name=columns[74][search][value]", "Value=", ENDITEM, 
		"Name=columns[74][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[75][data]", "Value=reporters", ENDITEM, 
		"Name=columns[75][name]", "Value=reporters.contactTypes.value", ENDITEM, 
		"Name=columns[75][searchable]", "Value=true", ENDITEM, 
		"Name=columns[75][orderable]", "Value=false", ENDITEM, 
		"Name=columns[75][search][value]", "Value=", ENDITEM, 
		"Name=columns[75][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[76][data]", "Value=action", ENDITEM, 
		"Name=columns[76][name]", "Value=", ENDITEM, 
		"Name=columns[76][searchable]", "Value=true", ENDITEM, 
		"Name=columns[76][orderable]", "Value=false", ENDITEM, 
		"Name=columns[76][search][value]", "Value=", ENDITEM, 
		"Name=columns[76][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=3", ENDITEM, 
		"Name=order[0][dir]", "Value=desc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=25", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=loadData", "Value=true", ENDITEM, 
		LAST);

	web_submit_data("saveState_4", 
		"Action={PVI_URL}/user/saveState", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=data", "Value={\"time\":1598849208549,\"start\":0,\"length\":25,\"order\":[[3,\"desc\"]],\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true},\"columns\":[{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}"
		"},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible"
		"\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"{\\\"simpleSearch\\\":\\\"{CaseNo}\\\",\\\"caseStateId\\\":\\\"2,3,4,6\\\",\\\"config\\\":\\\"{\\\\\\\"isOrOperation\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"sortWhileSearch\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"countSearchCriteria\\\\\\\": \\\\\\\"false\\\\\\\"}\\\",\\\"reportDistributionThreshold\\\":true,\\\"sourceDbId\\\":\\\"1\\\",\\\"firstReceiptDate\\\":\\\"{\\\\\\\"gte\\\\\\\":\\\\\\\"2019-09-02T00:00:00Z\\\\\\\",\\\\\\\"lte\\\\\\\":\\\\\\\"2020-08-31T23:59:59Z\\\\\\\"}\\\"}"
		"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\""
		"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}"
		"},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}}],\"ColReorder\":[0,1,2,3,35,33,6,5,7,10,39,12,4,8,9,11,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,34,36,37,38,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76]}", ENDITEM, 
		"Name=pageType", "Value=case_list_form", ENDITEM, 
		"Name=section", "Value=DataTable", ENDITEM, 
		LAST);

	lr_end_transaction("FUDiFFView_SearchCase",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("FUDiFFView_05_EditCase");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Full Case Entry",
		LAST);

/*Correlation comment - Do not change!  Original value='244701' Name ='CaseId_2' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=CaseId_2",
		"LB=data-case-id=\"",
		"RB=\" data-case-version",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_url("{CorrelationParameter}", 
		"URL={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t101.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("case-entry-manifest-0691008e616302be087a77f0c4f6bc2a.css", 
		"URL={PVI_URL}/assets/app/case-entry/case-entry-manifest-0691008e616302be087a77f0c4f6bc2a.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t102.inf", 
		LAST);

	web_url("attachmentViewer-manifest-d21cd5ef9afc9d23b8e3146c7832bb09.css", 
		"URL={PVI_URL}/assets/vendor/documentViewer/attachmentViewer-manifest-d21cd5ef9afc9d23b8e3146c7832bb09.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t103.inf", 
		LAST);

	web_url("case-entry-manifest-1993c6b7489a8cb7471b67d10215f6f8.js", 
		"URL={PVI_URL}/assets/app/case-entry/case-entry-manifest-1993c6b7489a8cb7471b67d10215f6f8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t104.inf", 
		LAST);
//
//	web_concurrent_end(NULL);
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("en-US.json_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/en-US.json?_=1598849222216", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t105.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("predefinedSearch.json_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/predefinedSearch.json?_=1598849222217", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t106.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("redactionReason.json_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/redactionReason.json?_=1598849222218", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t107.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("commentTemplate.html_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/commentTemplate.html?_=1598849222219", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("copyOverlayTemplate.html_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/copyOverlayTemplate.html?_=1598849222221", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t109.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("hyperlinkMenuTemplate.html_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/hyperlinkMenuTemplate.html?_=1598849222224", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t110.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("esignOverlayTemplate.html_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/esignOverlayTemplate.html?_=1598849222223", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t111.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("downloadOverlayTemplate.html_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/downloadOverlayTemplate.html?_=1598849222222", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t112.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("imageStampOverlayTemplate.html_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/imageStampOverlayTemplate.html?_=1598849222225", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t113.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("overwriteOverlayTemplate.html_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/overwriteOverlayTemplate.html?_=1598849222226", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t114.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("printTemplate.html_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printTemplate.html?_=1598849222229", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t115.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("printOverlayTemplate.html_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printOverlayTemplate.html?_=1598849222228", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t116.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("pageRedactionOverlayTemplate.html_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/pageRedactionOverlayTemplate.html?_=1598849222227", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t117.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("redactionReasonTemplate.html_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/redactionReasonTemplate.html?_=1598849222230", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t118.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("viewerTemplate.html_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/viewerTemplate.html?_=1598849222232", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchReferenceData", 
		"URL={PVI_URL}/caseEntry/fetchReferenceData?_=1598849222233", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t120.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("unsavedChangesOverlayTemplate.html_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/unsavedChangesOverlayTemplate.html?_=1598849222231", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t121.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("product_template.hbs", 
		"URL={PVI_URL}/assets/pv/comp/templates/product_template.hbs", 
		"Resource=1", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t122.inf", 
		LAST);

	web_url("contextMenuTemplate.html_3", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/contextMenuTemplate.html?_=1598849222220", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t123.inf", 
		"Mode=HTTP", 
		LAST);

//	web_concurrent_start(NULL);

	web_url("product_browser.hbs", 
		"URL={PVI_URL}/assets/pv/comp/templates/product_browser.hbs", 
		"Resource=1", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t124.inf", 
		LAST);

	web_url("meddra_template.hbs", 
		"URL={PVI_URL}/assets/pv/comp/templates/meddra_template.hbs", 
		"Resource=1", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t125.inf", 
		LAST);

	web_url("meddra_browser.hbs", 
		"URL={PVI_URL}/assets/pv/comp/templates/meddra_browser.hbs", 
		"Resource=1", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t126.inf", 
		LAST);

	web_url("study_template.hbs", 
		"URL={PVI_URL}/assets/pv/comp/templates/study_template.hbs", 
		"Resource=1", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t127.inf", 
		LAST);

	web_url("study_browser.hbs", 
		"URL={PVI_URL}/assets/pv/comp/templates/study_browser.hbs", 
		"Resource=1", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t128.inf", 
		LAST);

//	web_concurrent_end(NULL);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("loadServerTime_3", 
		"URL={PVI_URL}/config/loadServerTime?_=1598849222234", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getIngredients", 
		"URL={PVI_URL}/getIngredients?mapOfIds=%7B%220%22%3A3539%2C%221%22%3A10260101%2C%222%22%3A3539%2C%223%22%3A10349701%2C%224%22%3A2330%7D&isSpecialField=false&_=1598849222235", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("fetchAllUser", 
		"URL={PVI_URL}/user/fetchAllUser?_=1598849222236", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("referenceData_2", 
		"URL={PVI_URL}/task/referenceData?_=1598849222237", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t132.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("referenceData_3", 
		"URL={PVI_URL}/followUpQueryFrontEnd/referenceData?_=1598849222238", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t133.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);
	
	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Origin", 
		"{PVI_URL}");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Token_Id2}");
	
	web_concurrent_start(NULL);

	web_custom_request("fuqListForCase",
		"URL={PVI_URL}/fuq/fuqListForCase",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t134.inf",
		"Mode=HTTP",
		"EncType=application/json",
		"Body={\"draw\":1,\"columns\":[{\"data\":\"fuqIndex\",\"name\":\"fuqIndex\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"sentTo\",\"name\":\"sentTo\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"methodId\",\"name\":\"methodId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"subject\",\"name\":\"subject\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dateSent\",\"name\":\"dateSent\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"sentBy\",\"name\":\"sentBy\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"comments\",\"name\":\"comments\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dateClosed\",\"name\":\"dateClosed\",\"searchable\":true,\"orderable\":true,\"searc"
		"h\":{\"value\":\"\",\"regex\":false}},{\"data\":\"tertiaryRefId\",\"name\":\"tertiaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"secondaryRefId\",\"name\":\"secondaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"fuqAction\",\"name\":\"fuqAction\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}}],\"order\":[],\"start\":0,\"length\":25,\"search\":{\"value\":\"\",\"regex\":false},\"intakeCaseNumber\":\"\\n"
		"                                    {CaseNo}\\n"
		"                                \",\"searchCriteria\":{\"rangeList\":[]}}",
		LAST);

	web_custom_request("taskListForCase", 
		"URL={PVI_URL}/task/taskListForCase", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t135.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"draw\":1,\"columns\":[{\"data\":\"taskIndex\",\"name\":\"taskIndex\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"taskTypeId\",\"name\":\"taskTypeId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"assignedToId\",\"name\":\"assignedToId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"description\",\"name\":\"description\",\"searchable\""
		":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dueDate\",\"name\":\"dueDate\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"completionDate\",\"name\":\"completionDate\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"priorityId\",\"name\":\"priorityId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"status\",\"name\""
		":\"status\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"createdByUserId\",\"name\":\"createdByUserId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dateCreated\",\"name\":\"dateCreated\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"tertiaryRefId\",\"name\":\"tertiaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\""
		"regex\":false}},{\"data\":\"secondaryRefId\",\"name\":\"secondaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"taskAction\",\"name\":\"taskAction\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}}],\"order\":[],\"start\":0,\"length\":25,\"search\":{\"value\":\"\",\"regex\":false},\"intakeCaseNumber\":\"\\n                                    {CaseNo}\\n                                \",\""
		"searchCriteria\":{\"rangeList\":[]}}", 
		LAST);

//	web_revert_auto_header("Origin");
//
//	web_revert_auto_header("X-CSRF-TOKEN");
//
//	web_add_auto_header("Accept", 
//		"*/*");

//	web_concurrent_start(NULL);
	web_url("getKaseMedDraHierarchyStored",
		"URL={PVI_URL}/case/getKaseMedDraHierarchyStored?id={CorrelationParameter}&_=1598849222239",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t136.inf",
		"Mode=HTTP",
		LAST);

	web_url("getActionViewList_3", 
		"URL={PVI_URL}/case/getActionViewList?pageId=3&templateId=2&sourceDbId=1&_=1598849222240", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t137.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchAllTemplates", 
		"URL={PVI_URL}/caseEntry/fetchAllTemplates?templateId=2", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t138.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_concurrent_end(NULL);

	lr_end_transaction("FUDiFFView_05_EditCase",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("FUDiFFView_06_ChangeVersion");

	web_add_auto_header("Origin", 
		"{PVI_URL}");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Token_Id2}");

	web_submit_data("listAllowedUsersByCaseId",
		"Action={PVI_URL}/user/listAllowedUsersByCaseId",
		"Method=POST",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t139.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=caseId", "Value={CaseId_2}", ENDITEM,
		"Name=isCurrentUser", "Value=true", ENDITEM,
		LAST);

	web_submit_data("releaseEditLock", 
		"Action={PVI_URL}/caseEntry/releaseEditLock/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true", 
		"Snapshot=t140.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=id", "Value={CorrelationParameter}", ENDITEM, 
		LAST);

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");



	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Follow Up",
		LAST);

	web_url("244701",
		"URL={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t142.inf",
		"Mode=HTTP",
		LAST);

	web_add_header("If-None-Match", 
		"\"vendor/spinner-c7b3cbb3ec8249a7121b722cdd76b870.gif\"");

	web_url("spinner.gif",
		"URL={PVI_URL}/assets/vendor/spinner.gif",
		"Resource=1",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t143.inf",
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_concurrent_start(NULL);
	web_url("commentTemplate.html_4",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/commentTemplate.html?_=1598849264818",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t144.inf",
		"Mode=HTTP",
		LAST);

	web_url("en-US.json_4",
		"URL={PVI_URL}/assets/vendor/documentViewerJson/en-US.json?_=1598849264815",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t145.inf",
		"Mode=HTTP",
		LAST);

	web_url("redactionReason.json_4",
		"URL={PVI_URL}/assets/vendor/documentViewerJson/redactionReason.json?_=1598849264817",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t146.inf",
		"Mode=HTTP",
		LAST);

	web_url("predefinedSearch.json_4",
		"URL={PVI_URL}/assets/vendor/documentViewerJson/predefinedSearch.json?_=1598849264816",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t147.inf",
		"Mode=HTTP",
		LAST);

	web_url("contextMenuTemplate.html_4",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/contextMenuTemplate.html?_=1598849264819",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t148.inf",
		"Mode=HTTP",
		LAST);

	web_url("downloadOverlayTemplate.html_4",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/downloadOverlayTemplate.html?_=1598849264821",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t149.inf",
		"Mode=HTTP",
		LAST);

	web_url("esignOverlayTemplate.html_4",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/esignOverlayTemplate.html?_=1598849264822",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t150.inf",
		"Mode=HTTP",
		LAST);

	web_url("hyperlinkMenuTemplate.html_4",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/hyperlinkMenuTemplate.html?_=1598849264823",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t151.inf",
		"Mode=HTTP",
		LAST);

	web_url("imageStampOverlayTemplate.html_4",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/imageStampOverlayTemplate.html?_=1598849264824",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t152.inf",
		"Mode=HTTP",
		LAST);

	web_url("overwriteOverlayTemplate.html_4",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/overwriteOverlayTemplate.html?_=1598849264825",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t153.inf",
		"Mode=HTTP",
		LAST);

	web_url("pageRedactionOverlayTemplate.html_4",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/pageRedactionOverlayTemplate.html?_=1598849264826",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t154.inf",
		"Mode=HTTP",
		LAST);

	web_url("printOverlayTemplate.html_4",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printOverlayTemplate.html?_=1598849264827",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t155.inf",
		"Mode=HTTP",
		LAST);

	web_url("printTemplate.html_4",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printTemplate.html?_=1598849264828",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t156.inf",
		"Mode=HTTP",
		LAST);

	web_url("redactionReasonTemplate.html_4",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/redactionReasonTemplate.html?_=1598849264829",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t157.inf",
		"Mode=HTTP",
		LAST);

	web_url("unsavedChangesOverlayTemplate.html_4",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/unsavedChangesOverlayTemplate.html?_=1598849264830",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t158.inf",
		"Mode=HTTP",
		LAST);

	web_url("viewerTemplate.html_4",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/viewerTemplate.html?_=1598849264831",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t159.inf",
		"Mode=HTTP",
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("loadServerTime_4",
		"URL={PVI_URL}/config/loadServerTime?_=1598849264832",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t160.inf",
		"Mode=HTTP",
		LAST);
//
//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("copyOverlayTemplate.html_4",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/copyOverlayTemplate.html?_=1598849264820",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t161.inf",
		"Mode=HTTP",
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("getIngredients_2",
		"URL={PVI_URL}/getIngredients?mapOfIds=%7B%220%22%3A3539%2C%221%22%3A10260101%2C%222%22%3A3539%2C%223%22%3A10349701%2C%224%22%3A2330%7D&isSpecialField=false&_=1598849264833",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t162.inf",
		"Mode=HTTP",
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("fetchAllUser_2",
		"URL={PVI_URL}/user/fetchAllUser?_=1598849264834",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t163.inf",
		"Mode=HTTP",
		LAST);

	web_url("referenceData_4",
		"URL={PVI_URL}/task/referenceData?_=1598849264835",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t164.inf",
		"Mode=HTTP",
		LAST);

	web_url("referenceData_5",
		"URL={PVI_URL}/followUpQueryFrontEnd/referenceData?_=1598849264836",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t165.inf",
		"Mode=HTTP",
		LAST);

	web_concurrent_end(NULL);
	
	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Origin", 
		"{PVI_URL}");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Token_Id2}");

	web_concurrent_start(NULL);
	
	web_custom_request("fuqListForCase_2",
		"URL={PVI_URL}/fuq/fuqListForCase",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t166.inf",
		"Mode=HTTP",
		"EncType=application/json",
		"Body={\"draw\":1,\"columns\":[{\"data\":\"fuqIndex\",\"name\":\"fuqIndex\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"sentTo\",\"name\":\"sentTo\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"methodId\",\"name\":\"methodId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"subject\",\"name\":\"subject\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dateSent\",\"name\":\"dateSent\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"sentBy\",\"name\":\"sentBy\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"comments\",\"name\":\"comments\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dateClosed\",\"name\":\"dateClosed\",\"searchable\":true,\"orderable\":true,\"searc"
		"h\":{\"value\":\"\",\"regex\":false}},{\"data\":\"tertiaryRefId\",\"name\":\"tertiaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"secondaryRefId\",\"name\":\"secondaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"fuqAction\",\"name\":\"fuqAction\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}}],\"order\":[],\"start\":0,\"length\":25,\"search\":{\"value\":\"\",\"regex\":false},\"intakeCaseNumber\":\"\\n"
		"                                    {CaseNo}\\n"
		"                                \",\"searchCriteria\":{\"rangeList\":[]}}",
		LAST);

	web_custom_request("taskListForCase_2",
		"URL={PVI_URL}/task/taskListForCase",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t167.inf",
		"Mode=HTTP",
		"EncType=application/json",
		"Body={\"draw\":1,\"columns\":[{\"data\":\"taskIndex\",\"name\":\"taskIndex\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"taskTypeId\",\"name\":\"taskTypeId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"assignedToId\",\"name\":\"assignedToId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"description\",\"name\":\"description\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dueDate\",\"name\":\"dueDate\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"completionDate\",\"name\":\"completionDate\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"priorityId\",\"name\":\"priorityId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"status\",\"name\":\"status\",\"searchab"
		"le\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"createdByUserId\",\"name\":\"createdByUserId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dateCreated\",\"name\":\"dateCreated\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"tertiaryRefId\",\"name\":\"tertiaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"secondaryRefId\",\"name\":\"secondaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"taskAction\",\"name\":\"taskAction\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}}],\"order\":[],\"start\":0,\"length\":25,\"search\":{\"value\":\"\",\"regex\":false},\"intakeCaseNumber\":\"\\n"
		"                                    {CaseNo}\\n"
		"                                \",\"searchCriteria\":{\"rangeList\":[]}}",
		LAST);

//	web_revert_auto_header("Origin");
//
//	web_revert_auto_header("X-CSRF-TOKEN");
//
//	web_add_auto_header("Accept", 
//		"*/*");
//	web_concurrent_start(NULL);
	
	web_url("getKaseMedDraHierarchyStored_2",
		"URL={PVI_URL}/case/getKaseMedDraHierarchyStored?id={CaseId_2}&_=1598849264837",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t168.inf",
		"Mode=HTTP",
		LAST);

	web_url("getActionViewList_4",
		"URL={PVI_URL}/case/getActionViewList?pageId=3&templateId=2&sourceDbId=1&_=1598849264838",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t169.inf",
		"Mode=HTTP",
		LAST);

	web_url("fetchAllTemplates_2",
		"URL={PVI_URL}/caseEntry/fetchAllTemplates?templateId=2",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t170.inf",
		"Mode=HTTP",
		LAST);
	
	web_concurrent_end(NULL);

	lr_end_transaction("FUDiFFView_06_ChangeVersion",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("FUDiFFView_07_FollowupDiffView");

	web_add_auto_header("Origin", 
		"{PVI_URL}");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Token_Id2}");

	web_reg_find("Search=Body",
		"Text=Follow-Up",
		LAST);

	web_submit_data("validateFuDiffView",
		"Action={PVI_URL}/case/validateFuDiffView",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t171.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=data", "Value={\"caseId\":\"{CaseId_2}\",\"xmlType\":\"FU_DIFF_VIEW\"}", ENDITEM,
		LAST);

	web_submit_data("listAllowedUsersByCaseId_2",
		"Action={PVI_URL}/user/listAllowedUsersByCaseId",
		"Method=POST",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t172.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=caseId", "Value={CorrelationParameter}", ENDITEM,
		"Name=isCurrentUser", "Value=true", ENDITEM,
		LAST);

	web_submit_data("listAllowedUsersByCaseId_3",
		"Action={PVI_URL}/user/listAllowedUsersByCaseId",
		"Method=POST",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t173.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=caseId", "Value={CaseId_2}", ENDITEM,
		"Name=isCurrentUser", "Value=true", ENDITEM,
		LAST);

	web_submit_data("releaseEditLock_2",
		"Action={PVI_URL}/caseEntry/releaseEditLock/",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t174.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=id", "Value={CaseId_2}", ENDITEM,
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("244701_2",
		"URL={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t175.inf",
		"Mode=HTTP",
		LAST);

	web_add_header("If-None-Match", 
		"\"vendor/spinner-c7b3cbb3ec8249a7121b722cdd76b870.gif\"");

	web_url("spinner.gif_2",
		"URL={PVI_URL}/assets/vendor/spinner.gif",
		"Resource=1",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t176.inf",
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_concurrent_start(NULL);
	web_url("predefinedSearch.json_5",
		"URL={PVI_URL}/assets/vendor/documentViewerJson/predefinedSearch.json?_=1598849313993",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t177.inf",
		"Mode=HTTP",
		LAST);

	web_url("en-US.json_5",
		"URL={PVI_URL}/assets/vendor/documentViewerJson/en-US.json?_=1598849313992",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t178.inf",
		"Mode=HTTP",
		LAST);

	web_url("redactionReason.json_5",
		"URL={PVI_URL}/assets/vendor/documentViewerJson/redactionReason.json?_=1598849313994",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t179.inf",
		"Mode=HTTP",
		LAST);

	web_url("copyOverlayTemplate.html_5",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/copyOverlayTemplate.html?_=1598849313997",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t180.inf",
		"Mode=HTTP",
		LAST);

	web_url("downloadOverlayTemplate.html_5",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/downloadOverlayTemplate.html?_=1598849313998",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t181.inf",
		"Mode=HTTP",
		LAST);

	web_url("esignOverlayTemplate.html_5",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/esignOverlayTemplate.html?_=1598849313999",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t182.inf",
		"Mode=HTTP",
		LAST);

	web_url("hyperlinkMenuTemplate.html_5",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/hyperlinkMenuTemplate.html?_=1598849314000",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t183.inf",
		"Mode=HTTP",
		LAST);

	web_url("imageStampOverlayTemplate.html_5",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/imageStampOverlayTemplate.html?_=1598849314001",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t184.inf",
		"Mode=HTTP",
		LAST);

	web_url("pageRedactionOverlayTemplate.html_5",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/pageRedactionOverlayTemplate.html?_=1598849314003",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t185.inf",
		"Mode=HTTP",
		LAST);

	web_url("overwriteOverlayTemplate.html_5",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/overwriteOverlayTemplate.html?_=1598849314002",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t186.inf",
		"Mode=HTTP",
		LAST);

	web_url("contextMenuTemplate.html_5",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/contextMenuTemplate.html?_=1598849313996",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t187.inf",
		"Mode=HTTP",
		LAST);

	web_url("printTemplate.html_5",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printTemplate.html?_=1598849314005",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t188.inf",
		"Mode=HTTP",
		LAST);

	web_url("printOverlayTemplate.html_5",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printOverlayTemplate.html?_=1598849314004",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t189.inf",
		"Mode=HTTP",
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("loadServerTime_5",
		"URL={PVI_URL}/config/loadServerTime?_=1598849314009",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t190.inf",
		"Mode=HTTP",
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("unsavedChangesOverlayTemplate.html_5",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/unsavedChangesOverlayTemplate.html?_=1598849314007",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t191.inf",
		"Mode=HTTP",
		LAST);

	web_url("redactionReasonTemplate.html_5",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/redactionReasonTemplate.html?_=1598849314006",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t192.inf",
		"Mode=HTTP",
		LAST);

	web_url("viewerTemplate.html_5",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/viewerTemplate.html?_=1598849314008",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t193.inf",
		"Mode=HTTP",
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("getIngredients_3",
		"URL={PVI_URL}/getIngredients?mapOfIds=%7B%7D&isSpecialField=false&_=1598849314010",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t194.inf",
		"Mode=HTTP",
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("fetchAllUser_3",
		"URL={PVI_URL}/user/fetchAllUser?_=1598849314011",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t195.inf",
		"Mode=HTTP",
		LAST);

	web_url("commentTemplate.html_5",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/commentTemplate.html?_=1598849313995",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t196.inf",
		"Mode=HTTP",
		LAST);

	web_url("getActionViewList_5",
		"URL={PVI_URL}/case/getActionViewList?pageId=3&templateId=2&sourceDbId=1&_=1598849314013",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t197.inf",
		"Mode=HTTP",
		LAST);

	web_url("getKaseMedDraHierarchyStored_3",
		"URL={PVI_URL}/case/getKaseMedDraHierarchyStored?id={CaseId_2}&_=1598849314012",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t198.inf",
		"Mode=HTTP",
		LAST);

	web_url("fetchAllTemplates_3",
		"URL={PVI_URL}/caseEntry/fetchAllTemplates?templateId=2",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t199.inf",
		"Mode=HTTP",
		LAST);
	
	web_concurrent_end(NULL);

	lr_end_transaction("FUDiFFView_07_FollowupDiffView",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("FUDiFFView_07_Back");

	web_add_header("Origin", 
		"{PVI_URL}");

	web_add_header("X-CSRF-TOKEN",
		"{Token_Id2}");

	web_submit_data("releaseEditLock_3",
		"Action={PVI_URL}/caseEntry/releaseEditLock/",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/showFollowUpDiffView/{CaseId_2}?openAccordion=true&templateId=2",
		"Snapshot=t200.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=id", "Value={CaseId_2}", ENDITEM,
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Full Case Entry",
		LAST);

	web_url("244701_3",
		"URL={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t201.inf",
		"Mode=HTTP",
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	
	web_concurrent_start(NULL);
	web_url("en-US.json_6",
		"URL={PVI_URL}/assets/vendor/documentViewerJson/en-US.json?_=1598849343878",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t202.inf",
		"Mode=HTTP",
		LAST);

	web_url("predefinedSearch.json_6",
		"URL={PVI_URL}/assets/vendor/documentViewerJson/predefinedSearch.json?_=1598849343879",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t203.inf",
		"Mode=HTTP",
		LAST);

	web_url("downloadOverlayTemplate.html_6",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/downloadOverlayTemplate.html?_=1598849343884",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t204.inf",
		"Mode=HTTP",
		LAST);

	web_url("contextMenuTemplate.html_6",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/contextMenuTemplate.html?_=1598849343882",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t205.inf",
		"Mode=HTTP",
		LAST);

	web_url("copyOverlayTemplate.html_6",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/copyOverlayTemplate.html?_=1598849343883",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t206.inf",
		"Mode=HTTP",
		LAST);

	web_url("redactionReason.json_6",
		"URL={PVI_URL}/assets/vendor/documentViewerJson/redactionReason.json?_=1598849343880",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t207.inf",
		"Mode=HTTP",
		LAST);

	web_url("esignOverlayTemplate.html_6",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/esignOverlayTemplate.html?_=1598849343885",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t208.inf",
		"Mode=HTTP",
		LAST);

	web_url("imageStampOverlayTemplate.html_6",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/imageStampOverlayTemplate.html?_=1598849343887",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t209.inf",
		"Mode=HTTP",
		LAST);

	web_url("hyperlinkMenuTemplate.html_6",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/hyperlinkMenuTemplate.html?_=1598849343886",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t210.inf",
		"Mode=HTTP",
		LAST);

	web_url("pageRedactionOverlayTemplate.html_6",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/pageRedactionOverlayTemplate.html?_=1598849343889",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t211.inf",
		"Mode=HTTP",
		LAST);

	web_url("printOverlayTemplate.html_6",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printOverlayTemplate.html?_=1598849343890",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t212.inf",
		"Mode=HTTP",
		LAST);

	web_url("overwriteOverlayTemplate.html_6",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/overwriteOverlayTemplate.html?_=1598849343888",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t213.inf",
		"Mode=HTTP",
		LAST);

	web_url("viewerTemplate.html_6",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/viewerTemplate.html?_=1598849343894",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t214.inf",
		"Mode=HTTP",
		LAST);

	web_url("printTemplate.html_6",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printTemplate.html?_=1598849343891",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t215.inf",
		"Mode=HTTP",
		LAST);

	web_url("redactionReasonTemplate.html_6",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/redactionReasonTemplate.html?_=1598849343892",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t216.inf",
		"Mode=HTTP",
		LAST);

	web_url("unsavedChangesOverlayTemplate.html_6",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/unsavedChangesOverlayTemplate.html?_=1598849343893",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t217.inf",
		"Mode=HTTP",
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("loadServerTime_6",
		"URL={PVI_URL}/config/loadServerTime?_=1598849343895",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t218.inf",
		"Mode=HTTP",
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("commentTemplate.html_6",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/commentTemplate.html?_=1598849343881",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t219.inf",
		"Mode=HTTP",
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("getIngredients_4",
		"URL={PVI_URL}/getIngredients?mapOfIds=%7B%220%22%3A3539%2C%221%22%3A10260101%2C%222%22%3A3539%2C%223%22%3A10349701%2C%224%22%3A2330%7D&isSpecialField=false&_=1598849343896",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t220.inf",
		"Mode=HTTP",
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("fetchAllUser_4",
		"URL={PVI_URL}/user/fetchAllUser?_=1598849343897",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t221.inf",
		"Mode=HTTP",
		LAST);

	web_url("referenceData_6",
		"URL={PVI_URL}/task/referenceData?_=1598849343898",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t222.inf",
		"Mode=HTTP",
		LAST);

	web_url("referenceData_7",
		"URL={PVI_URL}/followUpQueryFrontEnd/referenceData?_=1598849343899",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t223.inf",
		"Mode=HTTP",
		LAST);
	
	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Origin", 
		"{PVI_URL}");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Token_Id2}");
	
	web_concurrent_start(NULL);

	web_custom_request("fuqListForCase_3",
		"URL={PVI_URL}/fuq/fuqListForCase",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t224.inf",
		"Mode=HTTP",
		"EncType=application/json",
		"Body={\"draw\":1,\"columns\":[{\"data\":\"fuqIndex\",\"name\":\"fuqIndex\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"sentTo\",\"name\":\"sentTo\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"methodId\",\"name\":\"methodId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"subject\",\"name\":\"subject\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dateSent\",\"name\":\"dateSent\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"sentBy\",\"name\":\"sentBy\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"comments\",\"name\":\"comments\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dateClosed\",\"name\":\"dateClosed\",\"searchable\":true,\"orderable\":true,\"searc"
		"h\":{\"value\":\"\",\"regex\":false}},{\"data\":\"tertiaryRefId\",\"name\":\"tertiaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"secondaryRefId\",\"name\":\"secondaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"fuqAction\",\"name\":\"fuqAction\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}}],\"order\":[],\"start\":0,\"length\":25,\"search\":{\"value\":\"\",\"regex\":false},\"intakeCaseNumber\":\"\\n"
		"                                    {CaseNo}\\n"
		"                                \",\"searchCriteria\":{\"rangeList\":[]}}",
		LAST);

	web_custom_request("taskListForCase_3",
		"URL={PVI_URL}/task/taskListForCase",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t225.inf",
		"Mode=HTTP",
		"EncType=application/json",
		"Body={\"draw\":1,\"columns\":[{\"data\":\"taskIndex\",\"name\":\"taskIndex\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"taskTypeId\",\"name\":\"taskTypeId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"assignedToId\",\"name\":\"assignedToId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"description\",\"name\":\"description\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dueDate\",\"name\":\"dueDate\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"completionDate\",\"name\":\"completionDate\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"priorityId\",\"name\":\"priorityId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"status\",\"name\":\"status\",\"searchab"
		"le\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"createdByUserId\",\"name\":\"createdByUserId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dateCreated\",\"name\":\"dateCreated\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"tertiaryRefId\",\"name\":\"tertiaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"secondaryRefId\",\"name\":\"secondaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"taskAction\",\"name\":\"taskAction\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}}],\"order\":[],\"start\":0,\"length\":25,\"search\":{\"value\":\"\",\"regex\":false},\"intakeCaseNumber\":\"\\n"
		"                                    {CaseNo}\\n"
		"                                \",\"searchCriteria\":{\"rangeList\":[]}}",
		LAST);

//	web_revert_auto_header("Origin");
//
//	web_revert_auto_header("X-CSRF-TOKEN");
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_concurrent_start(NULL);
	
	web_url("getKaseMedDraHierarchyStored_4",
		"URL={PVI_URL}/case/getKaseMedDraHierarchyStored?id={CaseId_2}&_=1598849343900",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t226.inf",
		"Mode=HTTP",
		LAST);

	web_url("getActionViewList_6",
		"URL={PVI_URL}/case/getActionViewList?pageId=3&templateId=2&sourceDbId=1&_=1598849343901",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t227.inf",
		"Mode=HTTP",
		LAST);

	web_url("fetchAllTemplates_4",
		"URL={PVI_URL}/caseEntry/fetchAllTemplates?templateId=2",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t228.inf",
		"Mode=HTTP",
		LAST);

	web_concurrent_end(NULL);
	lr_end_transaction("FUDiFFView_07_Back",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("FUDiFFView_08_Back");

	web_add_header("Origin", 
		"{PVI_URL}");

	web_add_header("X-CSRF-TOKEN",
		"{Token_Id2}");

	web_submit_data("releaseEditLock_4",
		"Action={PVI_URL}/caseEntry/releaseEditLock/",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CaseId_2}?templateId=",
		"Snapshot=t229.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=id", "Value={CaseId_2}", ENDITEM,
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Full Case Entry",
		LAST);

	web_url("{CorrelationParameter}_2",
		"URL={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/case/list",
		"Snapshot=t230.inf",
		"Mode=HTTP",
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_concurrent_start(NULL);

	web_url("predefinedSearch.json_7",
		"URL={PVI_URL}/assets/vendor/documentViewerJson/predefinedSearch.json?_=1598849375700",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t231.inf",
		"Mode=HTTP",
		LAST);

	web_url("en-US.json_7",
		"URL={PVI_URL}/assets/vendor/documentViewerJson/en-US.json?_=1598849375699",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t232.inf",
		"Mode=HTTP",
		LAST);

	web_url("redactionReason.json_7",
		"URL={PVI_URL}/assets/vendor/documentViewerJson/redactionReason.json?_=1598849375701",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t233.inf",
		"Mode=HTTP",
		LAST);

	web_url("copyOverlayTemplate.html_7",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/copyOverlayTemplate.html?_=1598849375704",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t234.inf",
		"Mode=HTTP",
		LAST);

	web_url("downloadOverlayTemplate.html_7",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/downloadOverlayTemplate.html?_=1598849375705",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t235.inf",
		"Mode=HTTP",
		LAST);

	web_url("esignOverlayTemplate.html_7",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/esignOverlayTemplate.html?_=1598849375706",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t236.inf",
		"Mode=HTTP",
		LAST);

	web_url("hyperlinkMenuTemplate.html_7",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/hyperlinkMenuTemplate.html?_=1598849375707",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t237.inf",
		"Mode=HTTP",
		LAST);

	web_url("imageStampOverlayTemplate.html_7",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/imageStampOverlayTemplate.html?_=1598849375708",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t238.inf",
		"Mode=HTTP",
		LAST);

	web_url("overwriteOverlayTemplate.html_7",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/overwriteOverlayTemplate.html?_=1598849375709",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t239.inf",
		"Mode=HTTP",
		LAST);

	web_url("pageRedactionOverlayTemplate.html_7",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/pageRedactionOverlayTemplate.html?_=1598849375710",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t240.inf",
		"Mode=HTTP",
		LAST);

	web_url("commentTemplate.html_7",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/commentTemplate.html?_=1598849375702",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t241.inf",
		"Mode=HTTP",
		LAST);

	web_url("contextMenuTemplate.html_7",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/contextMenuTemplate.html?_=1598849375703",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t242.inf",
		"Mode=HTTP",
		LAST);

	web_url("printOverlayTemplate.html_7",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printOverlayTemplate.html?_=1598849375711",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t243.inf",
		"Mode=HTTP",
		LAST);

	web_url("printTemplate.html_7",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printTemplate.html?_=1598849375712",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t244.inf",
		"Mode=HTTP",
		LAST);

	web_url("redactionReasonTemplate.html_7",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/redactionReasonTemplate.html?_=1598849375713",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t245.inf",
		"Mode=HTTP",
		LAST);

	web_url("unsavedChangesOverlayTemplate.html_7",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/unsavedChangesOverlayTemplate.html?_=1598849375714",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t246.inf",
		"Mode=HTTP",
		LAST);

	web_url("viewerTemplate.html_7",
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/viewerTemplate.html?_=1598849375715",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t247.inf",
		"Mode=HTTP",
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("loadServerTime_7",
		"URL={PVI_URL}/config/loadServerTime?_=1598849375716",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t248.inf",
		"Mode=HTTP",
		LAST);

	web_url("getIngredients_5",
		"URL={PVI_URL}/getIngredients?mapOfIds=%7B%220%22%3A3539%2C%221%22%3A10260101%2C%222%22%3A3539%2C%223%22%3A10349701%2C%224%22%3A2330%7D&isSpecialField=false&_=1598849375717",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t249.inf",
		"Mode=HTTP",
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("fetchAllUser_5",
		"URL={PVI_URL}/user/fetchAllUser?_=1598849375718",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t250.inf",
		"Mode=HTTP",
		LAST);

	web_url("referenceData_8",
		"URL={PVI_URL}/task/referenceData?_=1598849375719",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t251.inf",
		"Mode=HTTP",
		LAST);

	web_url("referenceData_9",
		"URL={PVI_URL}/followUpQueryFrontEnd/referenceData?_=1598849375720",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t252.inf",
		"Mode=HTTP",
		LAST);
	
	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Origin", 
		"{PVI_URL}");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Token_Id2}");
	
	web_concurrent_start(NULL);

	web_custom_request("fuqListForCase_4",
		"URL={PVI_URL}/fuq/fuqListForCase",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t253.inf",
		"Mode=HTTP",
		"EncType=application/json",
		"Body={\"draw\":1,\"columns\":[{\"data\":\"fuqIndex\",\"name\":\"fuqIndex\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"sentTo\",\"name\":\"sentTo\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"methodId\",\"name\":\"methodId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"subject\",\"name\":\"subject\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dateSent\",\"name\":\"dateSent\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"sentBy\",\"name\":\"sentBy\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"comments\",\"name\":\"comments\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dateClosed\",\"name\":\"dateClosed\",\"searchable\":true,\"orderable\":true,\"searc"
		"h\":{\"value\":\"\",\"regex\":false}},{\"data\":\"tertiaryRefId\",\"name\":\"tertiaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"secondaryRefId\",\"name\":\"secondaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"fuqAction\",\"name\":\"fuqAction\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}}],\"order\":[],\"start\":0,\"length\":25,\"search\":{\"value\":\"\",\"regex\":false},\"intakeCaseNumber\":\"\\n"
		"                                    {CaseNo}\\n"
		"                                \",\"searchCriteria\":{\"rangeList\":[]}}",
		LAST);

	web_custom_request("taskListForCase_4",
		"URL={PVI_URL}/task/taskListForCase",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t254.inf",
		"Mode=HTTP",
		"EncType=application/json",
		"Body={\"draw\":1,\"columns\":[{\"data\":\"taskIndex\",\"name\":\"taskIndex\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"taskTypeId\",\"name\":\"taskTypeId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"assignedToId\",\"name\":\"assignedToId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"description\",\"name\":\"description\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dueDate\",\"name\":\"dueDate\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"completionDate\",\"name\":\"completionDate\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"priorityId\",\"name\":\"priorityId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"status\",\"name\":\"status\",\"searchab"
		"le\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"createdByUserId\",\"name\":\"createdByUserId\",\"searchable\":true,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"dateCreated\",\"name\":\"dateCreated\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"tertiaryRefId\",\"name\":\"tertiaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"secondaryRefId\",\"name\":\"secondaryRefId\",\"searchable\":true,\"orderable\":true,\"search\":{\"value\":\"\",\"regex\":false}},{\"data\":\"taskAction\",\"name\":\"taskAction\",\"searchable\":false,\"orderable\":false,\"search\":{\"value\":\"\",\"regex\":false}}],\"order\":[],\"start\":0,\"length\":25,\"search\":{\"value\":\"\",\"regex\":false},\"intakeCaseNumber\":\"\\n"
		"                                    {CaseNo}\\n"
		"                                \",\"searchCriteria\":{\"rangeList\":[]}}",
		LAST);

//	web_revert_auto_header("Origin");
//
//	web_revert_auto_header("X-CSRF-TOKEN");
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_concurrent_start(NULL);
	
	web_url("getKaseMedDraHierarchyStored_5",
		"URL={PVI_URL}/case/getKaseMedDraHierarchyStored?id={CorrelationParameter}&_=1598849375721",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t255.inf",
		"Mode=HTTP",
		LAST);

	web_url("getActionViewList_7",
		"URL={PVI_URL}/case/getActionViewList?pageId=3&templateId=2&sourceDbId=1&_=1598849375722",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t256.inf",
		"Mode=HTTP",
		LAST);

	web_url("fetchAllTemplates_5",
		"URL={PVI_URL}/caseEntry/fetchAllTemplates?templateId=2",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={PVI_URL}/caseEntry/show/{CorrelationParameter}?openAccordion=true",
		"Snapshot=t257.inf",
		"Mode=HTTP",
		LAST);

	web_concurrent_end(NULL);
	lr_end_transaction("FUDiFFView_08_Back",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("FUDiFFView_09_Back");
	
	web_concurrent_start(NULL);

	web_url("copyOverlayTemplate.html_8", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/copyOverlayTemplate.html?_=1598849409751", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t258.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("en-US.json_8", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/en-US.json?_=1598849409746", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t259.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("contextMenuTemplate.html_8", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/contextMenuTemplate.html?_=1598849409750", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t260.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("hyperlinkMenuTemplate.html_8", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/hyperlinkMenuTemplate.html?_=1598849409754", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t261.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("esignOverlayTemplate.html_8", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/esignOverlayTemplate.html?_=1598849409753", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t262.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("downloadOverlayTemplate.html_8", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/downloadOverlayTemplate.html?_=1598849409752", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t263.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("predefinedSearch.json_8", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/predefinedSearch.json?_=1598849409747", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t264.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("overwriteOverlayTemplate.html_8", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/overwriteOverlayTemplate.html?_=1598849409756", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t265.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("imageStampOverlayTemplate.html_8", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/imageStampOverlayTemplate.html?_=1598849409755", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t266.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("pageRedactionOverlayTemplate.html_8", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/pageRedactionOverlayTemplate.html?_=1598849409757", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t267.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("printOverlayTemplate.html_8", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printOverlayTemplate.html?_=1598849409758", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t268.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("redactionReasonTemplate.html_8", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/redactionReasonTemplate.html?_=1598849409760", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t269.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("unsavedChangesOverlayTemplate.html_8", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/unsavedChangesOverlayTemplate.html?_=1598849409761", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t270.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("printTemplate.html_8", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/printTemplate.html?_=1598849409759", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t271.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("viewerTemplate.html_8", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/viewerTemplate.html?_=1598849409762", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t272.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("1_6", 
		"URL={PVI_URL}/case/rest/list_columns/1?_=1598849409763", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t273.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("loadServerTime_8", 
		"URL={PVI_URL}/config/loadServerTime?_=1598849409764", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t274.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("commentTemplate.html_8", 
		"URL={PVI_URL}/assets/vendor/documentViewerTemplates/commentTemplate.html?_=1598849409749", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t275.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("redactionReason.json_8", 
		"URL={PVI_URL}/assets/vendor/documentViewerJson/redactionReason.json?_=1598849409748", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t276.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_concurrent_end(NULL);

	web_add_auto_header("Origin", 
		"{PVI_URL}");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Token_Id2}");
	
	web_concurrent_start(NULL);

	web_submit_data("saveState_5", 
		"Action={PVI_URL}/user/saveState", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t277.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=data", "Value={\"time\":1598849413494,\"start\":0,\"length\":25,\"order\":[[3,\"desc\"]],\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true},\"columns\":[{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}"
		"},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible"
		"\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"{\\\"simpleSearch\\\":\\\"{CaseNo}\\\",\\\"caseStateId\\\":\\\"2,3,4,6\\\",\\\"config\\\":\\\"{\\\\\\\"isOrOperation\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"sortWhileSearch\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"countSearchCriteria\\\\\\\": \\\\\\\"false\\\\\\\"}\\\",\\\"reportDistributionThreshold\\\":true,\\\"sourceDbId\\\":\\\"1\\\",\\\"firstReceiptDate\\\":\\\"{\\\\\\\"gte\\\\\\\":\\\\\\\"2019-09-02T00:00:00Z\\\\\\\",\\\\\\\"lte\\\\\\\":\\\\\\\"2020-08-31T23:59:59Z\\\\\\\"}\\\"}"
		"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\""
		"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}"
		"},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}}],\"ColReorder\":[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76]}", ENDITEM, 
		"Name=pageType", "Value=case_list_form", ENDITEM, 
		"Name=section", "Value=DataTable", ENDITEM, 
		LAST);

	web_submit_data("saveState_6", 
		"Action={PVI_URL}/user/saveState", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t278.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=data", "Value={\"time\":1598849413563,\"start\":0,\"length\":25,\"order\":[[3,\"desc\"]],\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true},\"columns\":[{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}"
		"},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible"
		"\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"{\\\"simpleSearch\\\":\\\"{CaseNo}\\\",\\\"caseStateId\\\":\\\"2,3,4,6\\\",\\\"config\\\":\\\"{\\\\\\\"isOrOperation\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"sortWhileSearch\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"countSearchCriteria\\\\\\\": \\\\\\\"false\\\\\\\"}\\\",\\\"reportDistributionThreshold\\\":true,\\\"sourceDbId\\\":\\\"1\\\",\\\"firstReceiptDate\\\":\\\"{\\\\\\\"gte\\\\\\\":\\\\\\\"2019-09-02T00:00:00Z\\\\\\\",\\\\\\\"lte\\\\\\\":\\\\\\\"2020-08-31T23:59:59Z\\\\\\\"}\\\"}"
		"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\""
		"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}"
		"},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}}],\"ColReorder\":[0,1,2,3,35,33,6,5,7,10,39,12,4,8,9,11,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,34,36,37,38,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76]}", ENDITEM, 
		"Name=pageType", "Value=case_list_form", ENDITEM, 
		"Name=section", "Value=DataTable", ENDITEM, 
		LAST);

	web_submit_data("1_7", 
		"Action={PVI_URL}/case/rest/list/1", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t279.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=draw", "Value=2", ENDITEM, 
		"Name=columns[0][data]", "Value=selected", ENDITEM, 
		"Name=columns[0][name]", "Value=selected", ENDITEM, 
		"Name=columns[0][searchable]", "Value=true", ENDITEM, 
		"Name=columns[0][orderable]", "Value=false", ENDITEM, 
		"Name=columns[0][search][value]", "Value=", ENDITEM, 
		"Name=columns[0][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[1][data]", "Value=intakeCaseNumber", ENDITEM, 
		"Name=columns[1][name]", "Value=intakeCaseNumber", ENDITEM, 
		"Name=columns[1][searchable]", "Value=true", ENDITEM, 
		"Name=columns[1][orderable]", "Value=true", ENDITEM, 
		"Name=columns[1][search][value]", "Value=", ENDITEM, 
		"Name=columns[1][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[2][data]", "Value=caseVersion", ENDITEM, 
		"Name=columns[2][name]", "Value=caseVersion", ENDITEM, 
		"Name=columns[2][searchable]", "Value=true", ENDITEM, 
		"Name=columns[2][orderable]", "Value=true", ENDITEM, 
		"Name=columns[2][search][value]", "Value=", ENDITEM, 
		"Name=columns[2][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[3][data]", "Value=firstReceiptDateString", ENDITEM, 
		"Name=columns[3][name]", "Value=firstReceiptDate", ENDITEM, 
		"Name=columns[3][searchable]", "Value=true", ENDITEM, 
		"Name=columns[3][orderable]", "Value=true", ENDITEM, 
		"Name=columns[3][search][value]", "Value=", ENDITEM, 
		"Name=columns[3][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[4][data]", "Value=mostRecentReceiptDateString", ENDITEM, 
		"Name=columns[4][name]", "Value=mostRecentReceiptDate", ENDITEM, 
		"Name=columns[4][searchable]", "Value=true", ENDITEM, 
		"Name=columns[4][orderable]", "Value=true", ENDITEM, 
		"Name=columns[4][search][value]", "Value=", ENDITEM, 
		"Name=columns[4][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[5][data]", "Value=sourceType", ENDITEM, 
		"Name=columns[5][name]", "Value=sourceType.type", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=products", ENDITEM, 
		"Name=columns[6][name]", "Value=products.name", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=false", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=events", ENDITEM, 
		"Name=columns[7][name]", "Value=events.eventName", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=false", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=caseSeriousness", ENDITEM, 
		"Name=columns[8][name]", "Value=caseSeriousness.category", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=dueDateString", ENDITEM, 
		"Name=columns[9][name]", "Value=dueDate", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=caseState", ENDITEM, 
		"Name=columns[10][name]", "Value=caseState", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=assignedToUsername", ENDITEM, 
		"Name=columns[11][name]", "Value=assignedToUsername", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=reporterQualification", ENDITEM, 
		"Name=columns[12][name]", "Value=reporters.qualificationValue", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=true", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=priority", ENDITEM, 
		"Name=columns[13][name]", "Value=priority.value", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=attachments", ENDITEM, 
		"Name=columns[14][name]", "Value=attachments.name", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=false", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=isRelated", ENDITEM, 
		"Name=columns[15][name]", "Value=isRelated", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=true", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=safetyCaseNumber", ENDITEM, 
		"Name=columns[16][name]", "Value=safetyCaseNumber", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=reportType", ENDITEM, 
		"Name=columns[17][name]", "Value=reportType", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=true", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[18][name]", "Value=patientAge", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=false", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=gender", ENDITEM, 
		"Name=columns[19][name]", "Value=gender.value", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=true", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=destination", ENDITEM, 
		"Name=columns[20][name]", "Value=icsr.destination", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=true", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=reportDueDateString", ENDITEM, 
		"Name=columns[21][name]", "Value=icsr.dueDate", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=true", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=reporterComments", ENDITEM, 
		"Name=columns[22][name]", "Value=reporterComments", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=reporters", ENDITEM, 
		"Name=columns[23][name]", "Value=reporters.name", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=true", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=senderType", ENDITEM, 
		"Name=columns[24][name]", "Value=senderType.value", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=true", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=senderName", ENDITEM, 
		"Name=columns[25][name]", "Value=senderName", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=true", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=eventCountry", ENDITEM, 
		"Name=columns[26][name]", "Value=eventCountry.name", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=true", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=reportVersion", ENDITEM, 
		"Name=columns[27][name]", "Value=icsr.reportVersion", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=true", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=icsr", ENDITEM, 
		"Name=columns[28][name]", "Value=icsr.transmissionStatus", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=true", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=stateTimestampString", ENDITEM, 
		"Name=columns[29][name]", "Value=icsr.stateTimestamp", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=true", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=reportMessage", ENDITEM, 
		"Name=columns[30][name]", "Value=icsr.reportMessage", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=false", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=eventName", ENDITEM, 
		"Name=columns[31][name]", "Value=eventName", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=eventStartDate", ENDITEM, 
		"Name=columns[32][name]", "Value=eventStartDate", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=outcome", ENDITEM, 
		"Name=columns[33][name]", "Value=outcome.value", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=reporterCountry", ENDITEM, 
		"Name=columns[34][name]", "Value=reporters.countryName", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=relatednessString", ENDITEM, 
		"Name=columns[35][name]", "Value=relatednessString", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=categories", ENDITEM, 
		"Name=columns[36][name]", "Value=categories.value", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=false", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[37][data]", "Value=productName", ENDITEM, 
		"Name=columns[37][name]", "Value=productName", ENDITEM, 
		"Name=columns[37][searchable]", "Value=true", ENDITEM, 
		"Name=columns[37][orderable]", "Value=true", ENDITEM, 
		"Name=columns[37][search][value]", "Value=", ENDITEM, 
		"Name=columns[37][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[38][data]", "Value=substances", ENDITEM, 
		"Name=columns[38][name]", "Value=substances.nameValue", ENDITEM, 
		"Name=columns[38][searchable]", "Value=true", ENDITEM, 
		"Name=columns[38][orderable]", "Value=false", ENDITEM, 
		"Name=columns[38][search][value]", "Value=", ENDITEM, 
		"Name=columns[38][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[39][data]", "Value=studyNumber", ENDITEM, 
		"Name=columns[39][name]", "Value=studyNumber", ENDITEM, 
		"Name=columns[39][searchable]", "Value=true", ENDITEM, 
		"Name=columns[39][orderable]", "Value=true", ENDITEM, 
		"Name=columns[39][search][value]", "Value=", ENDITEM, 
		"Name=columns[39][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[40][data]", "Value=versionType", ENDITEM, 
		"Name=columns[40][name]", "Value=versionType.value", ENDITEM, 
		"Name=columns[40][searchable]", "Value=true", ENDITEM, 
		"Name=columns[40][orderable]", "Value=true", ENDITEM, 
		"Name=columns[40][search][value]", "Value=", ENDITEM, 
		"Name=columns[40][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[41][data]", "Value=receiptDateString", ENDITEM, 
		"Name=columns[41][name]", "Value=receiptDate", ENDITEM, 
		"Name=columns[41][searchable]", "Value=true", ENDITEM, 
		"Name=columns[41][orderable]", "Value=false", ENDITEM, 
		"Name=columns[41][search][value]", "Value=", ENDITEM, 
		"Name=columns[41][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[42][data]", "Value=onsetDate", ENDITEM, 
		"Name=columns[42][name]", "Value=onsetDate", ENDITEM, 
		"Name=columns[42][searchable]", "Value=true", ENDITEM, 
		"Name=columns[42][orderable]", "Value=true", ENDITEM, 
		"Name=columns[42][search][value]", "Value=", ENDITEM, 
		"Name=columns[42][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[43][data]", "Value=submissionDate", ENDITEM, 
		"Name=columns[43][name]", "Value=submissionDate", ENDITEM, 
		"Name=columns[43][searchable]", "Value=true", ENDITEM, 
		"Name=columns[43][orderable]", "Value=true", ENDITEM, 
		"Name=columns[43][search][value]", "Value=", ENDITEM, 
		"Name=columns[43][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[44][data]", "Value=dosageForm", ENDITEM, 
		"Name=columns[44][name]", "Value=dosageForm.value", ENDITEM, 
		"Name=columns[44][searchable]", "Value=true", ENDITEM, 
		"Name=columns[44][orderable]", "Value=true", ENDITEM, 
		"Name=columns[44][search][value]", "Value=", ENDITEM, 
		"Name=columns[44][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[45][data]", "Value=caseVersionType", ENDITEM, 
		"Name=columns[45][name]", "Value=caseVersionType", ENDITEM, 
		"Name=columns[45][searchable]", "Value=true", ENDITEM, 
		"Name=columns[45][orderable]", "Value=true", ENDITEM, 
		"Name=columns[45][search][value]", "Value=", ENDITEM, 
		"Name=columns[45][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[46][data]", "Value=icsrType", ENDITEM, 
		"Name=columns[46][name]", "Value=icsr.type", ENDITEM, 
		"Name=columns[46][searchable]", "Value=true", ENDITEM, 
		"Name=columns[46][orderable]", "Value=true", ENDITEM, 
		"Name=columns[46][search][value]", "Value=", ENDITEM, 
		"Name=columns[46][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[47][data]", "Value=studyType", ENDITEM, 
		"Name=columns[47][name]", "Value=studyType.value", ENDITEM, 
		"Name=columns[47][searchable]", "Value=true", ENDITEM, 
		"Name=columns[47][orderable]", "Value=true", ENDITEM, 
		"Name=columns[47][search][value]", "Value=", ENDITEM, 
		"Name=columns[47][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[48][data]", "Value=patientName", ENDITEM, 
		"Name=columns[48][name]", "Value=patientName", ENDITEM, 
		"Name=columns[48][searchable]", "Value=true", ENDITEM, 
		"Name=columns[48][orderable]", "Value=true", ENDITEM, 
		"Name=columns[48][search][value]", "Value=", ENDITEM, 
		"Name=columns[48][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[49][data]", "Value=seriousness", ENDITEM, 
		"Name=columns[49][name]", "Value=seriousnessString", ENDITEM, 
		"Name=columns[49][searchable]", "Value=true", ENDITEM, 
		"Name=columns[49][orderable]", "Value=false", ENDITEM, 
		"Name=columns[49][search][value]", "Value=", ENDITEM, 
		"Name=columns[49][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[50][data]", "Value=caseCountry", ENDITEM, 
		"Name=columns[50][name]", "Value=caseCountry.name", ENDITEM, 
		"Name=columns[50][searchable]", "Value=true", ENDITEM, 
		"Name=columns[50][orderable]", "Value=true", ENDITEM, 
		"Name=columns[50][search][value]", "Value=", ENDITEM, 
		"Name=columns[50][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[51][data]", "Value=allReferences", ENDITEM, 
		"Name=columns[51][name]", "Value=allReferences", ENDITEM, 
		"Name=columns[51][searchable]", "Value=true", ENDITEM, 
		"Name=columns[51][orderable]", "Value=false", ENDITEM, 
		"Name=columns[51][search][value]", "Value=", ENDITEM, 
		"Name=columns[51][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[52][data]", "Value=patientId", ENDITEM, 
		"Name=columns[52][name]", "Value=patientId", ENDITEM, 
		"Name=columns[52][searchable]", "Value=true", ENDITEM, 
		"Name=columns[52][orderable]", "Value=true", ENDITEM, 
		"Name=columns[52][search][value]", "Value=", ENDITEM, 
		"Name=columns[52][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[53][data]", "Value=dobString", ENDITEM, 
		"Name=columns[53][name]", "Value=dob", ENDITEM, 
		"Name=columns[53][searchable]", "Value=true", ENDITEM, 
		"Name=columns[53][orderable]", "Value=true", ENDITEM, 
		"Name=columns[53][search][value]", "Value=", ENDITEM, 
		"Name=columns[53][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[54][data]", "Value=matchScore", ENDITEM, 
		"Name=columns[54][name]", "Value=matchScore", ENDITEM, 
		"Name=columns[54][searchable]", "Value=true", ENDITEM, 
		"Name=columns[54][orderable]", "Value=true", ENDITEM, 
		"Name=columns[54][search][value]", "Value=", ENDITEM, 
		"Name=columns[54][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[55][data]", "Value=simpleSearch", ENDITEM, 
		"Name=columns[55][name]", "Value=simpleSearch", ENDITEM, 
		"Name=columns[55][searchable]", "Value=true", ENDITEM, 
		"Name=columns[55][orderable]", "Value=true", ENDITEM, 
		"Name=columns[55][search][value]", "Value={\"simpleSearch\":\"{CaseNo}\",\"caseStateId\":\"2,3,4,6\",\"config\":\"{\\\"isOrOperation\\\": \\\"false\\\", \\\"sortWhileSearch\\\": \\\"false\\\", \\\"countSearchCriteria\\\": \\\"false\\\"}\",\"reportDistributionThreshold\":true,\"sourceDbId\":\"1\",\"firstReceiptDate\":\"{\\\"gte\\\":\\\"2019-09-02T00:00:00Z\\\",\\\"lte\\\":\\\"2020-08-31T23:59:59Z\\\"}\"}", ENDITEM, 
		"Name=columns[55][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[56][data]", "Value=dateRangeSearch", ENDITEM, 
		"Name=columns[56][name]", "Value=dateRangeSearch", ENDITEM, 
		"Name=columns[56][searchable]", "Value=true", ENDITEM, 
		"Name=columns[56][orderable]", "Value=true", ENDITEM, 
		"Name=columns[56][search][value]", "Value=", ENDITEM, 
		"Name=columns[56][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[57][data]", "Value=sourceDb", ENDITEM, 
		"Name=columns[57][name]", "Value=sourceDb", ENDITEM, 
		"Name=columns[57][searchable]", "Value=true", ENDITEM, 
		"Name=columns[57][orderable]", "Value=true", ENDITEM, 
		"Name=columns[57][search][value]", "Value=", ENDITEM, 
		"Name=columns[57][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[58][data]", "Value=safetyWFState", ENDITEM, 
		"Name=columns[58][name]", "Value=safetyWFState", ENDITEM, 
		"Name=columns[58][searchable]", "Value=true", ENDITEM, 
		"Name=columns[58][orderable]", "Value=true", ENDITEM, 
		"Name=columns[58][search][value]", "Value=", ENDITEM, 
		"Name=columns[58][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[59][data]", "Value=centralReceiptDateString", ENDITEM, 
		"Name=columns[59][name]", "Value=centralReceiptDate", ENDITEM, 
		"Name=columns[59][searchable]", "Value=true", ENDITEM, 
		"Name=columns[59][orderable]", "Value=true", ENDITEM, 
		"Name=columns[59][search][value]", "Value=", ENDITEM, 
		"Name=columns[59][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[60][data]", "Value=localSubmissionDateString", ENDITEM, 
		"Name=columns[60][name]", "Value=localSubmissionDate", ENDITEM, 
		"Name=columns[60][searchable]", "Value=true", ENDITEM, 
		"Name=columns[60][orderable]", "Value=true", ENDITEM, 
		"Name=columns[60][search][value]", "Value=", ENDITEM, 
		"Name=columns[60][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[61][data]", "Value=localSubmissionDueDateString", ENDITEM, 
		"Name=columns[61][name]", "Value=localSubmissionDueDate", ENDITEM, 
		"Name=columns[61][searchable]", "Value=true", ENDITEM, 
		"Name=columns[61][orderable]", "Value=true", ENDITEM, 
		"Name=columns[61][search][value]", "Value=", ENDITEM, 
		"Name=columns[61][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[62][data]", "Value=latestAssignmentComment", ENDITEM, 
		"Name=columns[62][name]", "Value=latestAssignmentComment", ENDITEM, 
		"Name=columns[62][searchable]", "Value=true", ENDITEM, 
		"Name=columns[62][orderable]", "Value=false", ENDITEM, 
		"Name=columns[62][search][value]", "Value=", ENDITEM, 
		"Name=columns[62][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[63][data]", "Value=vendor", ENDITEM, 
		"Name=columns[63][name]", "Value=vendor", ENDITEM, 
		"Name=columns[63][searchable]", "Value=true", ENDITEM, 
		"Name=columns[63][orderable]", "Value=true", ENDITEM, 
		"Name=columns[63][search][value]", "Value=", ENDITEM, 
		"Name=columns[63][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[64][data]", "Value=replacementRequired", ENDITEM, 
		"Name=columns[64][name]", "Value=replacementRequired", ENDITEM, 
		"Name=columns[64][searchable]", "Value=true", ENDITEM, 
		"Name=columns[64][orderable]", "Value=true", ENDITEM, 
		"Name=columns[64][search][value]", "Value=", ENDITEM, 
		"Name=columns[64][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[65][data]", "Value=caseCreatedDate", ENDITEM, 
		"Name=columns[65][name]", "Value=caseCreatedDate", ENDITEM, 
		"Name=columns[65][searchable]", "Value=true", ENDITEM, 
		"Name=columns[65][orderable]", "Value=true", ENDITEM, 
		"Name=columns[65][search][value]", "Value=", ENDITEM, 
		"Name=columns[65][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[66][data]", "Value=reporters", ENDITEM, 
		"Name=columns[66][name]", "Value=reporters.organization", ENDITEM, 
		"Name=columns[66][searchable]", "Value=true", ENDITEM, 
		"Name=columns[66][orderable]", "Value=true", ENDITEM, 
		"Name=columns[66][search][value]", "Value=", ENDITEM, 
		"Name=columns[66][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[67][data]", "Value=reporters", ENDITEM, 
		"Name=columns[67][name]", "Value=reporters.department", ENDITEM, 
		"Name=columns[67][searchable]", "Value=true", ENDITEM, 
		"Name=columns[67][orderable]", "Value=true", ENDITEM, 
		"Name=columns[67][search][value]", "Value=", ENDITEM, 
		"Name=columns[67][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[68][data]", "Value=reporters", ENDITEM, 
		"Name=columns[68][name]", "Value=reporters.address", ENDITEM, 
		"Name=columns[68][searchable]", "Value=true", ENDITEM, 
		"Name=columns[68][orderable]", "Value=true", ENDITEM, 
		"Name=columns[68][search][value]", "Value=", ENDITEM, 
		"Name=columns[68][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[69][data]", "Value=reporters", ENDITEM, 
		"Name=columns[69][name]", "Value=reporters.telephone", ENDITEM, 
		"Name=columns[69][searchable]", "Value=true", ENDITEM, 
		"Name=columns[69][orderable]", "Value=true", ENDITEM, 
		"Name=columns[69][search][value]", "Value=", ENDITEM, 
		"Name=columns[69][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[70][data]", "Value=reporters", ENDITEM, 
		"Name=columns[70][name]", "Value=reporters.faxNumber", ENDITEM, 
		"Name=columns[70][searchable]", "Value=true", ENDITEM, 
		"Name=columns[70][orderable]", "Value=true", ENDITEM, 
		"Name=columns[70][search][value]", "Value=", ENDITEM, 
		"Name=columns[70][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[71][data]", "Value=reporters", ENDITEM, 
		"Name=columns[71][name]", "Value=reporters.email", ENDITEM, 
		"Name=columns[71][searchable]", "Value=true", ENDITEM, 
		"Name=columns[71][orderable]", "Value=true", ENDITEM, 
		"Name=columns[71][search][value]", "Value=", ENDITEM, 
		"Name=columns[71][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[72][data]", "Value=pqcCaseNumber", ENDITEM, 
		"Name=columns[72][name]", "Value=pqcCaseNumber", ENDITEM, 
		"Name=columns[72][searchable]", "Value=true", ENDITEM, 
		"Name=columns[72][orderable]", "Value=true", ENDITEM, 
		"Name=columns[72][search][value]", "Value=", ENDITEM, 
		"Name=columns[72][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[73][data]", "Value=returnRequired", ENDITEM, 
		"Name=columns[73][name]", "Value=returnRequired", ENDITEM, 
		"Name=columns[73][searchable]", "Value=true", ENDITEM, 
		"Name=columns[73][orderable]", "Value=true", ENDITEM, 
		"Name=columns[73][search][value]", "Value=", ENDITEM, 
		"Name=columns[73][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[74][data]", "Value=refundRequested", ENDITEM, 
		"Name=columns[74][name]", "Value=refundRequested", ENDITEM, 
		"Name=columns[74][searchable]", "Value=true", ENDITEM, 
		"Name=columns[74][orderable]", "Value=true", ENDITEM, 
		"Name=columns[74][search][value]", "Value=", ENDITEM, 
		"Name=columns[74][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[75][data]", "Value=reporters", ENDITEM, 
		"Name=columns[75][name]", "Value=reporters.contactTypes.value", ENDITEM, 
		"Name=columns[75][searchable]", "Value=true", ENDITEM, 
		"Name=columns[75][orderable]", "Value=false", ENDITEM, 
		"Name=columns[75][search][value]", "Value=", ENDITEM, 
		"Name=columns[75][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[76][data]", "Value=action", ENDITEM, 
		"Name=columns[76][name]", "Value=", ENDITEM, 
		"Name=columns[76][searchable]", "Value=true", ENDITEM, 
		"Name=columns[76][orderable]", "Value=false", ENDITEM, 
		"Name=columns[76][search][value]", "Value=", ENDITEM, 
		"Name=columns[76][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=3", ENDITEM, 
		"Name=order[0][dir]", "Value=desc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=25", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=loadData", "Value=true", ENDITEM, 
		LAST);

//	web_revert_auto_header("Origin");
//
//	web_revert_auto_header("X-CSRF-TOKEN");

	web_url("getActionViewList_8", 
		"URL={PVI_URL}/case/getActionViewList?pageId=1&sourceDbId=1&_=1598849409765", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t280.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_concurrent_end(NULL);

	lr_end_transaction("FUDiFFView_09_Back",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("FUDiFFView_ClearFilter");

	web_add_auto_header("Origin", 
		"{PVI_URL}");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Token_Id2}");

	web_custom_request("saveState_7", 
		"URL={PVI_URL}/user/saveState", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t281.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=data="
		"%7B%22form.case_list_form%3Einput%22%3A%22%22%2C%22form.case_list_form%3Eselect.date-range-type.persisting%22%3A%22firstReceiptDate%22%2C%22form.case_list_form%3Eselect.pviListDateRange.persisting%22%3A%22LAST_X_DAYS%22%2C%22form.case_list_form%3Einput.range-factor-field.persisting%22%3A%22365%22%2C%22form.case_list_form%3Einput.datepicker-rangeStartDate.persisting%22%3A%22%22%2C%22form.case_list_form%3Einput.datepicker-rangeEndDate.persisting%22%3A%22%22%2C%22form.case_list_form%3Ediv%3Ediv%3Ediv"
		"%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(0)%3Einput.2-0%22%3A%22checked%22%2C%22form.case_list_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(1)%3Einput.3-1%22%3A%22checked%22%2C%22form.case_list_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(2)%3Einput.4-2%22%3A%22checked%22%2C%22form.case_list_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(3)%3Einput.11-3%22%3A%22unchecked%22%2C%22form.case_list_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(4)"
		"%3Einput.7-4%22%3A%22unchecked%22%2C%22form.case_list_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(5)%3Einput.5-5%22%3A%22unchecked%22%2C%22form.case_list_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(6)%3Einput.6-6%22%3A%22checked%22%2C%22form.case_list_form%3Ediv%3Ediv%3Ediv%3Aeq(5)%3Ediv%3Aeq(1)%3Ediv%3Aeq(7)%3Einput.report-distribution%22%3A%22checked%22%7D&pageType=case_list_form&section=FORM_STATE", 
		LAST);

	web_submit_data("1_8", 
		"Action={PVI_URL}/case/rest/list/1", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t282.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=draw", "Value=3", ENDITEM, 
		"Name=columns[0][data]", "Value=selected", ENDITEM, 
		"Name=columns[0][name]", "Value=selected", ENDITEM, 
		"Name=columns[0][searchable]", "Value=true", ENDITEM, 
		"Name=columns[0][orderable]", "Value=false", ENDITEM, 
		"Name=columns[0][search][value]", "Value=", ENDITEM, 
		"Name=columns[0][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[1][data]", "Value=intakeCaseNumber", ENDITEM, 
		"Name=columns[1][name]", "Value=intakeCaseNumber", ENDITEM, 
		"Name=columns[1][searchable]", "Value=true", ENDITEM, 
		"Name=columns[1][orderable]", "Value=true", ENDITEM, 
		"Name=columns[1][search][value]", "Value=", ENDITEM, 
		"Name=columns[1][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[2][data]", "Value=caseVersion", ENDITEM, 
		"Name=columns[2][name]", "Value=caseVersion", ENDITEM, 
		"Name=columns[2][searchable]", "Value=true", ENDITEM, 
		"Name=columns[2][orderable]", "Value=true", ENDITEM, 
		"Name=columns[2][search][value]", "Value=", ENDITEM, 
		"Name=columns[2][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[3][data]", "Value=firstReceiptDateString", ENDITEM, 
		"Name=columns[3][name]", "Value=firstReceiptDate", ENDITEM, 
		"Name=columns[3][searchable]", "Value=true", ENDITEM, 
		"Name=columns[3][orderable]", "Value=true", ENDITEM, 
		"Name=columns[3][search][value]", "Value=", ENDITEM, 
		"Name=columns[3][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[4][data]", "Value=mostRecentReceiptDateString", ENDITEM, 
		"Name=columns[4][name]", "Value=mostRecentReceiptDate", ENDITEM, 
		"Name=columns[4][searchable]", "Value=true", ENDITEM, 
		"Name=columns[4][orderable]", "Value=true", ENDITEM, 
		"Name=columns[4][search][value]", "Value=", ENDITEM, 
		"Name=columns[4][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[5][data]", "Value=sourceType", ENDITEM, 
		"Name=columns[5][name]", "Value=sourceType.type", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=products", ENDITEM, 
		"Name=columns[6][name]", "Value=products.name", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=false", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=events", ENDITEM, 
		"Name=columns[7][name]", "Value=events.eventName", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=false", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=caseSeriousness", ENDITEM, 
		"Name=columns[8][name]", "Value=caseSeriousness.category", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=dueDateString", ENDITEM, 
		"Name=columns[9][name]", "Value=dueDate", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=caseState", ENDITEM, 
		"Name=columns[10][name]", "Value=caseState", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=assignedToUsername", ENDITEM, 
		"Name=columns[11][name]", "Value=assignedToUsername", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=reporterQualification", ENDITEM, 
		"Name=columns[12][name]", "Value=reporters.qualificationValue", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=true", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=priority", ENDITEM, 
		"Name=columns[13][name]", "Value=priority.value", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=attachments", ENDITEM, 
		"Name=columns[14][name]", "Value=attachments.name", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=false", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=isRelated", ENDITEM, 
		"Name=columns[15][name]", "Value=isRelated", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=true", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=safetyCaseNumber", ENDITEM, 
		"Name=columns[16][name]", "Value=safetyCaseNumber", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=reportType", ENDITEM, 
		"Name=columns[17][name]", "Value=reportType", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=true", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[18][name]", "Value=patientAge", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=false", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=gender", ENDITEM, 
		"Name=columns[19][name]", "Value=gender.value", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=true", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=destination", ENDITEM, 
		"Name=columns[20][name]", "Value=icsr.destination", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=true", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=reportDueDateString", ENDITEM, 
		"Name=columns[21][name]", "Value=icsr.dueDate", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=true", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=reporterComments", ENDITEM, 
		"Name=columns[22][name]", "Value=reporterComments", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=reporters", ENDITEM, 
		"Name=columns[23][name]", "Value=reporters.name", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=true", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=senderType", ENDITEM, 
		"Name=columns[24][name]", "Value=senderType.value", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=true", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=senderName", ENDITEM, 
		"Name=columns[25][name]", "Value=senderName", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=true", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=eventCountry", ENDITEM, 
		"Name=columns[26][name]", "Value=eventCountry.name", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=true", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=reportVersion", ENDITEM, 
		"Name=columns[27][name]", "Value=icsr.reportVersion", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=true", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=icsr", ENDITEM, 
		"Name=columns[28][name]", "Value=icsr.transmissionStatus", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=true", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=stateTimestampString", ENDITEM, 
		"Name=columns[29][name]", "Value=icsr.stateTimestamp", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=true", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=reportMessage", ENDITEM, 
		"Name=columns[30][name]", "Value=icsr.reportMessage", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=false", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=eventName", ENDITEM, 
		"Name=columns[31][name]", "Value=eventName", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=eventStartDate", ENDITEM, 
		"Name=columns[32][name]", "Value=eventStartDate", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=outcome", ENDITEM, 
		"Name=columns[33][name]", "Value=outcome.value", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=reporterCountry", ENDITEM, 
		"Name=columns[34][name]", "Value=reporters.countryName", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=relatednessString", ENDITEM, 
		"Name=columns[35][name]", "Value=relatednessString", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=categories", ENDITEM, 
		"Name=columns[36][name]", "Value=categories.value", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=false", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[37][data]", "Value=productName", ENDITEM, 
		"Name=columns[37][name]", "Value=productName", ENDITEM, 
		"Name=columns[37][searchable]", "Value=true", ENDITEM, 
		"Name=columns[37][orderable]", "Value=true", ENDITEM, 
		"Name=columns[37][search][value]", "Value=", ENDITEM, 
		"Name=columns[37][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[38][data]", "Value=substances", ENDITEM, 
		"Name=columns[38][name]", "Value=substances.nameValue", ENDITEM, 
		"Name=columns[38][searchable]", "Value=true", ENDITEM, 
		"Name=columns[38][orderable]", "Value=false", ENDITEM, 
		"Name=columns[38][search][value]", "Value=", ENDITEM, 
		"Name=columns[38][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[39][data]", "Value=studyNumber", ENDITEM, 
		"Name=columns[39][name]", "Value=studyNumber", ENDITEM, 
		"Name=columns[39][searchable]", "Value=true", ENDITEM, 
		"Name=columns[39][orderable]", "Value=true", ENDITEM, 
		"Name=columns[39][search][value]", "Value=", ENDITEM, 
		"Name=columns[39][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[40][data]", "Value=versionType", ENDITEM, 
		"Name=columns[40][name]", "Value=versionType.value", ENDITEM, 
		"Name=columns[40][searchable]", "Value=true", ENDITEM, 
		"Name=columns[40][orderable]", "Value=true", ENDITEM, 
		"Name=columns[40][search][value]", "Value=", ENDITEM, 
		"Name=columns[40][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[41][data]", "Value=receiptDateString", ENDITEM, 
		"Name=columns[41][name]", "Value=receiptDate", ENDITEM, 
		"Name=columns[41][searchable]", "Value=true", ENDITEM, 
		"Name=columns[41][orderable]", "Value=false", ENDITEM, 
		"Name=columns[41][search][value]", "Value=", ENDITEM, 
		"Name=columns[41][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[42][data]", "Value=onsetDate", ENDITEM, 
		"Name=columns[42][name]", "Value=onsetDate", ENDITEM, 
		"Name=columns[42][searchable]", "Value=true", ENDITEM, 
		"Name=columns[42][orderable]", "Value=true", ENDITEM, 
		"Name=columns[42][search][value]", "Value=", ENDITEM, 
		"Name=columns[42][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[43][data]", "Value=submissionDate", ENDITEM, 
		"Name=columns[43][name]", "Value=submissionDate", ENDITEM, 
		"Name=columns[43][searchable]", "Value=true", ENDITEM, 
		"Name=columns[43][orderable]", "Value=true", ENDITEM, 
		"Name=columns[43][search][value]", "Value=", ENDITEM, 
		"Name=columns[43][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[44][data]", "Value=dosageForm", ENDITEM, 
		"Name=columns[44][name]", "Value=dosageForm.value", ENDITEM, 
		"Name=columns[44][searchable]", "Value=true", ENDITEM, 
		"Name=columns[44][orderable]", "Value=true", ENDITEM, 
		"Name=columns[44][search][value]", "Value=", ENDITEM, 
		"Name=columns[44][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[45][data]", "Value=caseVersionType", ENDITEM, 
		"Name=columns[45][name]", "Value=caseVersionType", ENDITEM, 
		"Name=columns[45][searchable]", "Value=true", ENDITEM, 
		"Name=columns[45][orderable]", "Value=true", ENDITEM, 
		"Name=columns[45][search][value]", "Value=", ENDITEM, 
		"Name=columns[45][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[46][data]", "Value=icsrType", ENDITEM, 
		"Name=columns[46][name]", "Value=icsr.type", ENDITEM, 
		"Name=columns[46][searchable]", "Value=true", ENDITEM, 
		"Name=columns[46][orderable]", "Value=true", ENDITEM, 
		"Name=columns[46][search][value]", "Value=", ENDITEM, 
		"Name=columns[46][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[47][data]", "Value=studyType", ENDITEM, 
		"Name=columns[47][name]", "Value=studyType.value", ENDITEM, 
		"Name=columns[47][searchable]", "Value=true", ENDITEM, 
		"Name=columns[47][orderable]", "Value=true", ENDITEM, 
		"Name=columns[47][search][value]", "Value=", ENDITEM, 
		"Name=columns[47][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[48][data]", "Value=patientName", ENDITEM, 
		"Name=columns[48][name]", "Value=patientName", ENDITEM, 
		"Name=columns[48][searchable]", "Value=true", ENDITEM, 
		"Name=columns[48][orderable]", "Value=true", ENDITEM, 
		"Name=columns[48][search][value]", "Value=", ENDITEM, 
		"Name=columns[48][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[49][data]", "Value=seriousness", ENDITEM, 
		"Name=columns[49][name]", "Value=seriousnessString", ENDITEM, 
		"Name=columns[49][searchable]", "Value=true", ENDITEM, 
		"Name=columns[49][orderable]", "Value=false", ENDITEM, 
		"Name=columns[49][search][value]", "Value=", ENDITEM, 
		"Name=columns[49][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[50][data]", "Value=caseCountry", ENDITEM, 
		"Name=columns[50][name]", "Value=caseCountry.name", ENDITEM, 
		"Name=columns[50][searchable]", "Value=true", ENDITEM, 
		"Name=columns[50][orderable]", "Value=true", ENDITEM, 
		"Name=columns[50][search][value]", "Value=", ENDITEM, 
		"Name=columns[50][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[51][data]", "Value=allReferences", ENDITEM, 
		"Name=columns[51][name]", "Value=allReferences", ENDITEM, 
		"Name=columns[51][searchable]", "Value=true", ENDITEM, 
		"Name=columns[51][orderable]", "Value=false", ENDITEM, 
		"Name=columns[51][search][value]", "Value=", ENDITEM, 
		"Name=columns[51][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[52][data]", "Value=patientId", ENDITEM, 
		"Name=columns[52][name]", "Value=patientId", ENDITEM, 
		"Name=columns[52][searchable]", "Value=true", ENDITEM, 
		"Name=columns[52][orderable]", "Value=true", ENDITEM, 
		"Name=columns[52][search][value]", "Value=", ENDITEM, 
		"Name=columns[52][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[53][data]", "Value=dobString", ENDITEM, 
		"Name=columns[53][name]", "Value=dob", ENDITEM, 
		"Name=columns[53][searchable]", "Value=true", ENDITEM, 
		"Name=columns[53][orderable]", "Value=true", ENDITEM, 
		"Name=columns[53][search][value]", "Value=", ENDITEM, 
		"Name=columns[53][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[54][data]", "Value=matchScore", ENDITEM, 
		"Name=columns[54][name]", "Value=matchScore", ENDITEM, 
		"Name=columns[54][searchable]", "Value=true", ENDITEM, 
		"Name=columns[54][orderable]", "Value=true", ENDITEM, 
		"Name=columns[54][search][value]", "Value=", ENDITEM, 
		"Name=columns[54][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[55][data]", "Value=simpleSearch", ENDITEM, 
		"Name=columns[55][name]", "Value=simpleSearch", ENDITEM, 
		"Name=columns[55][searchable]", "Value=true", ENDITEM, 
		"Name=columns[55][orderable]", "Value=true", ENDITEM, 
		"Name=columns[55][search][value]", "Value={\"simpleSearch\":\"\",\"caseStateId\":\"2,3,4,6\",\"config\":\"{\\\"isOrOperation\\\": \\\"false\\\", \\\"sortWhileSearch\\\": \\\"false\\\", \\\"countSearchCriteria\\\": \\\"false\\\"}\",\"reportDistributionThreshold\":true,\"sourceDbId\":\"1\",\"firstReceiptDate\":\"{\\\"gte\\\":\\\"2019-09-02T00:00:00Z\\\",\\\"lte\\\":\\\"2020-08-31T23:59:59Z\\\"}\"}", ENDITEM, 
		"Name=columns[55][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[56][data]", "Value=dateRangeSearch", ENDITEM, 
		"Name=columns[56][name]", "Value=dateRangeSearch", ENDITEM, 
		"Name=columns[56][searchable]", "Value=true", ENDITEM, 
		"Name=columns[56][orderable]", "Value=true", ENDITEM, 
		"Name=columns[56][search][value]", "Value=", ENDITEM, 
		"Name=columns[56][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[57][data]", "Value=sourceDb", ENDITEM, 
		"Name=columns[57][name]", "Value=sourceDb", ENDITEM, 
		"Name=columns[57][searchable]", "Value=true", ENDITEM, 
		"Name=columns[57][orderable]", "Value=true", ENDITEM, 
		"Name=columns[57][search][value]", "Value=", ENDITEM, 
		"Name=columns[57][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[58][data]", "Value=safetyWFState", ENDITEM, 
		"Name=columns[58][name]", "Value=safetyWFState", ENDITEM, 
		"Name=columns[58][searchable]", "Value=true", ENDITEM, 
		"Name=columns[58][orderable]", "Value=true", ENDITEM, 
		"Name=columns[58][search][value]", "Value=", ENDITEM, 
		"Name=columns[58][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[59][data]", "Value=centralReceiptDateString", ENDITEM, 
		"Name=columns[59][name]", "Value=centralReceiptDate", ENDITEM, 
		"Name=columns[59][searchable]", "Value=true", ENDITEM, 
		"Name=columns[59][orderable]", "Value=true", ENDITEM, 
		"Name=columns[59][search][value]", "Value=", ENDITEM, 
		"Name=columns[59][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[60][data]", "Value=localSubmissionDateString", ENDITEM, 
		"Name=columns[60][name]", "Value=localSubmissionDate", ENDITEM, 
		"Name=columns[60][searchable]", "Value=true", ENDITEM, 
		"Name=columns[60][orderable]", "Value=true", ENDITEM, 
		"Name=columns[60][search][value]", "Value=", ENDITEM, 
		"Name=columns[60][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[61][data]", "Value=localSubmissionDueDateString", ENDITEM, 
		"Name=columns[61][name]", "Value=localSubmissionDueDate", ENDITEM, 
		"Name=columns[61][searchable]", "Value=true", ENDITEM, 
		"Name=columns[61][orderable]", "Value=true", ENDITEM, 
		"Name=columns[61][search][value]", "Value=", ENDITEM, 
		"Name=columns[61][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[62][data]", "Value=latestAssignmentComment", ENDITEM, 
		"Name=columns[62][name]", "Value=latestAssignmentComment", ENDITEM, 
		"Name=columns[62][searchable]", "Value=true", ENDITEM, 
		"Name=columns[62][orderable]", "Value=false", ENDITEM, 
		"Name=columns[62][search][value]", "Value=", ENDITEM, 
		"Name=columns[62][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[63][data]", "Value=vendor", ENDITEM, 
		"Name=columns[63][name]", "Value=vendor", ENDITEM, 
		"Name=columns[63][searchable]", "Value=true", ENDITEM, 
		"Name=columns[63][orderable]", "Value=true", ENDITEM, 
		"Name=columns[63][search][value]", "Value=", ENDITEM, 
		"Name=columns[63][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[64][data]", "Value=replacementRequired", ENDITEM, 
		"Name=columns[64][name]", "Value=replacementRequired", ENDITEM, 
		"Name=columns[64][searchable]", "Value=true", ENDITEM, 
		"Name=columns[64][orderable]", "Value=true", ENDITEM, 
		"Name=columns[64][search][value]", "Value=", ENDITEM, 
		"Name=columns[64][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[65][data]", "Value=caseCreatedDate", ENDITEM, 
		"Name=columns[65][name]", "Value=caseCreatedDate", ENDITEM, 
		"Name=columns[65][searchable]", "Value=true", ENDITEM, 
		"Name=columns[65][orderable]", "Value=true", ENDITEM, 
		"Name=columns[65][search][value]", "Value=", ENDITEM, 
		"Name=columns[65][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[66][data]", "Value=reporters", ENDITEM, 
		"Name=columns[66][name]", "Value=reporters.organization", ENDITEM, 
		"Name=columns[66][searchable]", "Value=true", ENDITEM, 
		"Name=columns[66][orderable]", "Value=true", ENDITEM, 
		"Name=columns[66][search][value]", "Value=", ENDITEM, 
		"Name=columns[66][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[67][data]", "Value=reporters", ENDITEM, 
		"Name=columns[67][name]", "Value=reporters.department", ENDITEM, 
		"Name=columns[67][searchable]", "Value=true", ENDITEM, 
		"Name=columns[67][orderable]", "Value=true", ENDITEM, 
		"Name=columns[67][search][value]", "Value=", ENDITEM, 
		"Name=columns[67][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[68][data]", "Value=reporters", ENDITEM, 
		"Name=columns[68][name]", "Value=reporters.address", ENDITEM, 
		"Name=columns[68][searchable]", "Value=true", ENDITEM, 
		"Name=columns[68][orderable]", "Value=true", ENDITEM, 
		"Name=columns[68][search][value]", "Value=", ENDITEM, 
		"Name=columns[68][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[69][data]", "Value=reporters", ENDITEM, 
		"Name=columns[69][name]", "Value=reporters.telephone", ENDITEM, 
		"Name=columns[69][searchable]", "Value=true", ENDITEM, 
		"Name=columns[69][orderable]", "Value=true", ENDITEM, 
		"Name=columns[69][search][value]", "Value=", ENDITEM, 
		"Name=columns[69][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[70][data]", "Value=reporters", ENDITEM, 
		"Name=columns[70][name]", "Value=reporters.faxNumber", ENDITEM, 
		"Name=columns[70][searchable]", "Value=true", ENDITEM, 
		"Name=columns[70][orderable]", "Value=true", ENDITEM, 
		"Name=columns[70][search][value]", "Value=", ENDITEM, 
		"Name=columns[70][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[71][data]", "Value=reporters", ENDITEM, 
		"Name=columns[71][name]", "Value=reporters.email", ENDITEM, 
		"Name=columns[71][searchable]", "Value=true", ENDITEM, 
		"Name=columns[71][orderable]", "Value=true", ENDITEM, 
		"Name=columns[71][search][value]", "Value=", ENDITEM, 
		"Name=columns[71][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[72][data]", "Value=pqcCaseNumber", ENDITEM, 
		"Name=columns[72][name]", "Value=pqcCaseNumber", ENDITEM, 
		"Name=columns[72][searchable]", "Value=true", ENDITEM, 
		"Name=columns[72][orderable]", "Value=true", ENDITEM, 
		"Name=columns[72][search][value]", "Value=", ENDITEM, 
		"Name=columns[72][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[73][data]", "Value=returnRequired", ENDITEM, 
		"Name=columns[73][name]", "Value=returnRequired", ENDITEM, 
		"Name=columns[73][searchable]", "Value=true", ENDITEM, 
		"Name=columns[73][orderable]", "Value=true", ENDITEM, 
		"Name=columns[73][search][value]", "Value=", ENDITEM, 
		"Name=columns[73][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[74][data]", "Value=refundRequested", ENDITEM, 
		"Name=columns[74][name]", "Value=refundRequested", ENDITEM, 
		"Name=columns[74][searchable]", "Value=true", ENDITEM, 
		"Name=columns[74][orderable]", "Value=true", ENDITEM, 
		"Name=columns[74][search][value]", "Value=", ENDITEM, 
		"Name=columns[74][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[75][data]", "Value=reporters", ENDITEM, 
		"Name=columns[75][name]", "Value=reporters.contactTypes.value", ENDITEM, 
		"Name=columns[75][searchable]", "Value=true", ENDITEM, 
		"Name=columns[75][orderable]", "Value=false", ENDITEM, 
		"Name=columns[75][search][value]", "Value=", ENDITEM, 
		"Name=columns[75][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[76][data]", "Value=action", ENDITEM, 
		"Name=columns[76][name]", "Value=", ENDITEM, 
		"Name=columns[76][searchable]", "Value=true", ENDITEM, 
		"Name=columns[76][orderable]", "Value=false", ENDITEM, 
		"Name=columns[76][search][value]", "Value=", ENDITEM, 
		"Name=columns[76][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=3", ENDITEM, 
		"Name=order[0][dir]", "Value=desc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=25", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=loadData", "Value=true", ENDITEM, 
		LAST);

	web_submit_data("saveState_8", 
		"Action={PVI_URL}/user/saveState", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t283.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=data", "Value={\"time\":1598849449527,\"start\":0,\"length\":25,\"order\":[[3,\"desc\"]],\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true},\"columns\":[{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}"
		"},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible"
		"\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\""
		"search\":\"{\\\"simpleSearch\\\":\\\"\\\",\\\"caseStateId\\\":\\\"2,3,4,6\\\",\\\"config\\\":\\\"{\\\\\\\"isOrOperation\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"sortWhileSearch\\\\\\\": \\\\\\\"false\\\\\\\", \\\\\\\"countSearchCriteria\\\\\\\": \\\\\\\"false\\\\\\\"}\\\",\\\"reportDistributionThreshold\\\":true,\\\"sourceDbId\\\":\\\"1\\\",\\\"firstReceiptDate\\\":\\\"{\\\\\\\"gte\\\\\\\":\\\\\\\"2019-09-02T00:00:00Z\\\\\\\",\\\\\\\"lte\\\\\\\":\\\\\\\"2020-08-31T23:59:59Z\\\\\\\"}\\\"}\",\"smart"
		"\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":"
		"{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\""
		"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\""
		"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\""
		":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":false,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}},{\"visible\":true,\"search\":{\"search\":\"\",\"smart\":true,\"regex\":false,\"caseInsensitive\":true}}],\"ColReorder\":[0,1,2,3,35,33,6,5,7,10,39,12,4,8,9,11,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,34,36,37,38,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76]}", ENDITEM, 
		"Name=pageType", "Value=case_list_form", ENDITEM, 
		"Name=section", "Value=DataTable", ENDITEM, 
		LAST);

	lr_end_transaction("FUDiFFView_ClearFilter",LR_AUTO);

	lr_think_time(3);



	lr_start_transaction("FUDiFFView_10_NavigatePVAdmin");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Welcome to PV Admin",
		LAST);

	web_url("10.100.22.34:8083", 
		"URL={URL}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={PVI_URL}/case/list", 
		"Snapshot=t284.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-5a9a6ebac98d25fc12e2e16341f8ab99.json\"");

	web_url("en.json_2", 
		"URL={URL}/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/", 
		"Snapshot=t285.inf", 
		LAST);

	lr_end_transaction("FUDiFFView_10_NavigatePVAdmin",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("FUDiFFView_11_Logout");

	web_reg_find("Search=Body",
		"Text=Login",
		LAST);

	web_url("Logout", 
		"URL={URL}/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/", 
		"Snapshot=t286.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("FUDiFFView_11_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}