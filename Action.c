//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("Comcast_Modesto_T01_Authenication_Token");
	truclient_step("1", "Navigate to 'http://localhost:8080/examples'", "snapshot=Action_1.inf");
	lr_end_transaction("Comcast_Modesto_T01_Authenication_Token",0);
	lr_start_transaction("Comcast_Modesto_T02_Create_Customer");
	truclient_step("2", "Click on Servlets examples link", "snapshot=Action_2.inf");
	lr_end_transaction("Comcast_Modesto_T02_Create_Customer",0);
	lr_start_transaction("Comcast_Modesto_T03_SetEmailBar");
	truclient_step("3", "Click on Execute link", "snapshot=Action_3.inf");
	truclient_step("4", "Click on return image", "snapshot=Action_4.inf");
	lr_end_transaction("Comcast_Modesto_T03_SetEmailBar",0);
	lr_start_transaction("Comcast_Modest_T04_AddPaymeanToBar");
	truclient_step("5", "Click on Execute link", "snapshot=Action_5.inf");
	truclient_step("6", "Click on Request Information Example...", "snapshot=Action_6.inf");
	truclient_step("7", "Click on return image", "snapshot=Action_7.inf");
	lr_end_transaction("Comcast_Modest_T04_AddPaymeanToBar",0);
	lr_start_transaction("Comcast_Modesto_T05_AddSSNToContact");
	truclient_step("8", "Click on Execute link", "snapshot=Action_8.inf");
	truclient_step("9", "Click on return image", "snapshot=Action_9.inf");
	lr_end_transaction("Comcast_Modesto_T05_AddSSNToContact",0);
	lr_start_transaction("Comcast_Modesto_T06_CreateOrderUnlimited");
	truclient_step("10", "Click on Execute link", "snapshot=Action_10.inf");
	truclient_step("11", "button (1)", "snapshot=Action_11.inf");
	{
		truclient_step("11.2", "Type Madan in firstname textbox", "snapshot=Action_11.2.inf");
		truclient_step("11.3", "Type Kv in lastname textbox", "snapshot=Action_11.3.inf");
		truclient_step("11.4", "Click on button (1) button", "snapshot=Action_11.4.inf");
	}
	truclient_step("12", "Click on return image", "snapshot=Action_12.inf");
	lr_end_transaction("Comcast_Modesto_T06_CreateOrderUnlimited",0);
	lr_start_transaction("Comcast_Modesto_T07_UpdateProductConfiguration");
	truclient_step("13", "Click on Execute link", "snapshot=Action_13.inf");
	truclient_step("14", "button (1)", "snapshot=Action_14.inf");
	{
		truclient_step("14.2", "Type Madan in cookiename textbox", "snapshot=Action_14.2.inf");
		truclient_step("14.3", "Type Cookie_1 in cookievalue textbox", "snapshot=Action_14.3.inf");
		truclient_step("14.4", "Click on button (1) button", "snapshot=Action_14.4.inf");
	}
	truclient_step("15", "Click on return image", "snapshot=Action_15.inf");
	lr_end_transaction("Comcast_Modesto_T07_UpdateProductConfiguration",0);
	lr_start_transaction("Comcast_Modesto_T08_UpdatePayChannel");
	truclient_step("16", "Click on Execute link", "snapshot=Action_16.inf");
	truclient_step("17", "button (1)", "snapshot=Action_17.inf");
	{
		truclient_step("17.2", "Type Name_1 in dataname textbox", "snapshot=Action_17.2.inf");
		truclient_step("17.3", "Type Value_1 in datavalue textbox", "snapshot=Action_17.3.inf");
		truclient_step("17.4", "Click on button (1) button", "snapshot=Action_17.4.inf");
	}
	truclient_step("18", "Click on return image", "snapshot=Action_18.inf");
	lr_end_transaction("Comcast_Modesto_T08_UpdatePayChannel",0);
	lr_start_transaction("Comcast_Modesto_T09_ApplyPayment");
	truclient_step("19", "Navigate to 'http://localhost:8080/examples/'", "snapshot=Action_19.inf");
	truclient_step("20", "Click on WebSocket (JSR356) Exampl... link", "snapshot=Action_20.inf");
	truclient_step("21", "Click on Echo example link", "snapshot=Action_21.inf");
	truclient_step("22", "Go Back a page", "snapshot=Action_22.inf");
	truclient_step("23", "Go Back a page", "snapshot=Action_23.inf");
	truclient_step("24", "Click on WebSocket Examples using... link", "snapshot=Action_24.inf");
	truclient_step("25", "Click on Echo example link", "snapshot=Action_25.inf");
	truclient_step("26", "Go Back a page", "snapshot=Action_26.inf");
	truclient_step("27", "Go Back a page", "snapshot=Action_27.inf");
	lr_end_transaction("Comcast_Modesto_T09_ApplyPayment",0);
	lr_start_transaction("Comcast_Modesto_T10_SubmitOrder");
	truclient_step("28", "Click on JSP Examples link", "snapshot=Action_28.inf");
	truclient_step("29", "Click on Execute link", "snapshot=Action_29.inf");
	truclient_step("30", "Go Back a page", "snapshot=Action_30.inf");
	lr_end_transaction("Comcast_Modesto_T10_SubmitOrder",0);
	lr_start_transaction("Comcast_Modesto_T12_HandleMPA_SyncResponse");
	truclient_step("31", "Click on Execute link", "snapshot=Action_31.inf");
	truclient_step("32", "Go Back a page", "snapshot=Action_32.inf");
	truclient_step("33", "Click on Execute link", "snapshot=Action_33.inf");
	truclient_step("34", "Click on JSP 2.0 Expression Language... button", "snapshot=Action_34.inf");
	truclient_step("36", "Type 123 in bar textbox", "snapshot=Action_36.inf");
	truclient_step("37", "Click on button (1) button", "snapshot=Action_37.inf");
	truclient_step("38", "Navigate to 'http://localhost:8080/examples/jsp/'", "snapshot=Action_38.inf");
	truclient_step("39", "Click on Execute link", "snapshot=Action_39.inf");
	truclient_step("40", "Navigate to 'http://localhost:8080/examples/jsp/'", "snapshot=Action_40.inf");
	truclient_step("41", "Click on Execute link", "snapshot=Action_41.inf");
	truclient_step("42", "Navigate to 'http://localhost:8080/examples/jsp/'", "snapshot=Action_42.inf");
	truclient_step("43", "Click on Execute link", "snapshot=Action_43.inf");
	truclient_step("44", "Navigate to 'http://localhost:8080/examples/jsp/'", "snapshot=Action_44.inf");
	truclient_step("45", "Click on Execute link", "snapshot=Action_45.inf");
	lr_end_transaction("Comcast_Modesto_T12_HandleMPA_SyncResponse",0);
	truclient_step("46", "Navigate to 'http://localhost:8080/examples/jsp/'", "snapshot=Action_46.inf");
	lr_start_transaction("Comcast_Modesto_Cancel_Order");
	truclient_step("47", "Click on Execute link", "snapshot=Action_47.inf");
	truclient_step("48", "Navigate to 'http://localhost:8080/examples/jsp/'", "snapshot=Action_48.inf");
	truclient_step("49", "Click on Execute link", "snapshot=Action_49.inf");
	lr_end_transaction("Comcast_Modesto_Cancel_Order",0);
	lr_start_transaction("Comcast_Modesto_CreateBillingProfile");
	truclient_step("52", "Type admin in Username textbox", "snapshot=Action_52.inf");
	truclient_step("53", "Type ***** in Password passwordbox", "snapshot=Action_53.inf");
	truclient_step("54", "Go Back a page", "snapshot=Action_54.inf");
	lr_end_transaction("Comcast_Modesto_CreateBillingProfile",0);
	truclient_step("56", "Navigate to 'http://localhost:8080/examples/jsp/'", "snapshot=Action_56.inf");
	lr_start_transaction("Comcast_Modesto_GetOrderDetails");
	truclient_step("57", "Click on Execute link", "snapshot=Action_57.inf");
	truclient_step("58", "Navigate to 'http://localhost:8080/examples/jsp/'", "snapshot=Action_58.inf");
	truclient_step("59", "Double click Execute link", "snapshot=Action_59.inf");
	lr_end_transaction("Comcast_Modesto_GetOrderDetails",0);

	return 0;
}
