07-12 01:10:24.348   945   945 D RILD    : **RIL Daemon Started**
07-12 01:10:24.348   945   945 D RILD    : **RILd param count=1**
07-12 01:10:25.359   945   945 D RILD    : overriding with -s /dev/socket/qemud
07-12 01:10:25.364   945   945 W RILD    : RIL_SAP_Init not defined or exported in libreference-ril.so: undefined symbol: RIL_SAP_Init
07-12 01:10:25.364   945   945 D RILD    : RIL_Init argc = 5 clientId = 0
07-12 01:10:25.364   945   945 I RIL     : Opening socket /dev/socket/qemud
07-12 01:10:25.364   945   945 I RIL     : Client id received 0
07-12 01:10:25.364   945   945 D RILD    : RIL_Init rilInit completed
07-12 01:10:25.364   945   945 I RILC    : SIM_COUNT: 1
07-12 01:10:25.364   945   945 E RILC    : RIL_register: RIL version 11
07-12 01:10:25.364   945   945 I RILC    : s_registerCalled flag set, 1
07-12 01:10:25.364   945   945 I RILC    : Start to listen RIL_SOCKET_1
07-12 01:10:25.364   945   945 D RILD    : RIL_Init RIL_register completed
07-12 01:10:25.364   945   945 D RILD    : RIL_register_socket completed
07-12 01:10:25.364   945   945 D RILD    : RIL_Init starting sleep loop
07-12 01:10:25.380   945  1043 D RIL     : setRadioState(0)
07-12 01:10:25.381   945  1043 D AT      : AT> ATE0Q0V1
07-12 01:10:25.384   945  1045 D AT      : AT< OK
07-12 01:10:25.649   945  1043 D RIL     : query_ctec. current: 0xb732f708, preferred: 0xb732f70c
07-12 01:10:25.649   945  1043 D AT      : AT> AT+CTEC?
07-12 01:10:25.650   945  1045 D AT      : AT< +CTEC: 0,f
07-12 01:10:25.650   945  1045 D AT      : AT< OK
07-12 01:10:25.650   945  1043 D RIL     : Response: +CTEC: 0,f
07-12 01:10:25.650   945  1043 D RIL     : line remaining after int: f
07-12 01:10:25.650   945  1043 D RIL     : query_supported_techs
07-12 01:10:25.650   945  1043 D AT      : AT> AT+CTEC=?
07-12 01:10:25.650   945  1045 D AT      : AT< +CTEC: 0,1,2,3
07-12 01:10:25.650   945  1045 D AT      : AT< OK
07-12 01:10:25.650   945  1043 I RIL     : Found Multimode Modem. Supported techs mask: 0000000f. Current tech: 0
07-12 01:10:25.650   945  1043 D AT      : AT> ATE0Q0V1
07-12 01:10:25.650   945  1045 D AT      : AT< OK
07-12 01:10:25.650   945  1043 D AT      : AT> ATS0=0
07-12 01:10:25.650   945  1045 D AT      : AT< OK
07-12 01:10:25.650   945  1043 D AT      : AT> AT+CMEE=1
07-12 01:10:25.650   945  1045 D AT      : AT< OK
07-12 01:10:25.650   945  1043 D AT      : AT> AT+CREG=2
07-12 01:10:25.650   945  1045 D AT      : AT< OK
07-12 01:10:25.650   945  1043 D AT      : AT> AT+CGREG=1
07-12 01:10:25.650   945  1045 D AT      : AT< OK
07-12 01:10:25.650   945  1043 D AT      : AT> AT+CCWA=1
07-12 01:10:25.650   945  1045 D AT      : AT< OK
07-12 01:10:25.650   945  1043 D AT      : AT> AT+CMOD=0
07-12 01:10:25.650   945  1045 D AT      : AT< OK
07-12 01:10:25.650   945  1043 D AT      : AT> AT+CMUT=0
07-12 01:10:25.650   945  1045 D AT      : AT< OK
07-12 01:10:25.650   945  1043 D AT      : AT> AT+CSSN=0,1
07-12 01:10:25.651   945  1045 D AT      : AT< OK
07-12 01:10:25.651   945  1043 D AT      : AT> AT+COLP=0
07-12 01:10:25.651   945  1045 D AT      : AT< OK
07-12 01:10:25.651   945  1043 D AT      : AT> AT+CSCS="HEX"
07-12 01:10:25.651   945  1045 D AT      : AT< OK
07-12 01:10:25.651   945  1043 D AT      : AT> AT+CUSD=1
07-12 01:10:25.651   945  1045 D AT      : AT< OK
07-12 01:10:25.651   945  1043 D AT      : AT> AT+CGEREP=1,0
07-12 01:10:25.651   945  1045 D AT      : AT< OK
07-12 01:10:25.651   945  1043 D AT      : AT> AT+CMGF=0
07-12 01:10:25.660   945  1045 D AT      : AT< %CTZV: 17/07/12:01:10:29+48:0:Unknown!Unknown
07-12 01:10:25.661   945  1045 D AT      : AT< OK
07-12 01:10:25.661   945  1043 D AT      : AT> AT+CFUN?
07-12 01:10:25.661   945  1045 D AT      : AT< +CFUN: 0
07-12 01:10:25.661   945  1045 D AT      : AT< OK
07-12 01:10:26.805  1071  1071 D TelephonyManager: /proc/cmdline=qemu.gles=0 qemu=1 console=ttyS0 android.qemud=ttyS1 androidboot.hardware=goldfish clocksource=pit android.checkjni=1 ndns=1
07-12 01:10:33.316  1071  1071 D TelephonyRegistry: systemRunning register for intents
07-12 01:10:33.373  1071  1094 D TelephonyRegistry: listen oscl: hasNotifySubscriptionInfoChangedOccurred==false no callback
07-12 01:10:33.535  1071  1071 D TelephonyRegistry: notifyCellLocationForSubscriber: subId=0 cellLocation=Bundle[{}]
07-12 01:10:33.652  1495  1495 D TelephonyManager: No /proc/cmdline exception=java.io.FileNotFoundException: /proc/cmdline: open failed: EACCES (Permission denied)
07-12 01:10:33.652  1495  1495 D TelephonyManager: /proc/cmdline=
07-12 01:10:33.722  1474  1474 D TDC     : updateOrInsert: inserting: Modem { uuid=modem, state=0, rilModel=0, rat={}, maxActiveVoiceCall=1, maxActiveDataCall=1, maxStandby=1 }
07-12 01:10:33.722  1474  1474 D TDC     : updateOrInsert: inserting: Sim { uuid=sim, modemUuid=modem, state=0 }
07-12 01:10:33.725  1474  1474 D CdmaSSM : subscriptionSource from settings: 1
07-12 01:10:33.725  1474  1474 I PhoneFactory: Cdma Subscription set to 1
07-12 01:10:33.727  1474  1474 D TelephonyManager: /proc/cmdline=qemu.gles=0 qemu=1 console=ttyS0 android.qemud=ttyS1 androidboot.hardware=goldfish clocksource=pit android.checkjni=1 ndns=1
07-12 01:10:33.732  1474  1474 I PhoneFactory: Network Mode set to 0
07-12 01:10:33.735  1474  1474 D RILJ    : RIL(context, preferredNetworkType=0 cdmaSubscription=1)
07-12 01:10:33.736  1474  1474 D RILJ    : Starting RILReceiver0 [SUB0]
07-12 01:10:33.737  1474  1474 D RILJ    : [3648]> GET_HARDWARE_CONFIG [SUB0]
07-12 01:10:33.737  1474  1474 D RilRequest: [3648]< GET_HARDWARE_CONFIG error: com.android.internal.telephony.CommandException: RADIO_NOT_AVAILABLE ret=
07-12 01:10:33.737  1474  1474 I PhoneFactory: Creating SubscriptionController
07-12 01:10:33.742  1474  1474 D SubscriptionController: [SubscriptionController] init by Context
07-12 01:10:33.756  1474  1474 D UiccController: Creating UiccController
07-12 01:10:33.758  1474  1474 D TelephonyTester: register for intent action=com.android.internal.telephony.gsm.action_detached
07-12 01:10:33.758  1474  1474 D TelephonyTester: register for intent action=com.android.internal.telephony.gsm.action_attached
07-12 01:10:33.760   945  1043 I RILC    : libril: new connection to RIL_SOCKET_1
07-12 01:10:33.760   945  1043 I RILC    : RIL Daemon version: android reference-ril 1.0
07-12 01:10:33.760  1474  1534 I RILJ    : (0) Connected to 'rild' socket
07-12 01:10:33.765  1474  1534 D RILJ    : [UNSL]< UNSOL_RIL_CONNECTED {11} [SUB0]
07-12 01:10:33.765  1474  1534 D RILJ    : [3649]> RADIO_POWER off [SUB0]
07-12 01:10:33.766  1474  1474 D PhoneBase: mDoesRilSendMultipleCallRing=true
07-12 01:10:33.766  1474  1474 D PhoneBase: mCallRingDelay=3000
07-12 01:10:33.766  1474  1534 D RILJ    : [3650]> RIL_REQUEST_CDMA_SET_SUBSCRIPTION_SOURCE : 1 [SUB0]
07-12 01:10:33.766   945  1043 D RIL     : onRequest: RADIO_POWER
07-12 01:10:33.766  1474  1534 D RILJ    : setCellInfoListRate: 2147483647 [SUB0]
07-12 01:10:33.766  1474  1534 D RILJ    : [3651]> RIL_REQUEST_SET_CELL_INFO_LIST_RATE [SUB0]
07-12 01:10:33.767   945  1043 D RIL     : onRequest: CDMA_SET_SUBSCRIPTION_SOURCE
07-12 01:10:33.767  1474  1534 D RILJ    : [UNSL]< UNSOL_RESPONSE_RADIO_STATE_CHANGED RADIO_OFF [SUB0]
07-12 01:10:33.767  1474  1534 D RILJ    : [3652]> SCREEN_STATE: true [SUB0]
07-12 01:10:33.767   945  1043 D RIL     : onRequest: SET_UNSOL_CELL_INFO_LIST_RATE
07-12 01:10:33.767  1474  1534 D RILJ    : [UNSL]< UNSOL_NITZ_TIME_RECEIVED 17/07/12:01:10:29+48:0:Unknown!Unknown [SUB0]
07-12 01:10:33.767  1474  1534 D RILJ    : [3649]< RADIO_POWER  [SUB0]
07-12 01:10:33.767  1474  1534 D RilRequest: [3650]< RIL_REQUEST_CDMA_SET_SUBSCRIPTION_SOURCE error: com.android.internal.telephony.CommandException: RADIO_NOT_AVAILABLE ret=
07-12 01:10:33.767  1474  1534 D RilRequest: [3651]< RIL_REQUEST_SET_CELL_INFO_LIST_RATE error: com.android.internal.telephony.CommandException: RADIO_NOT_AVAILABLE ret=
07-12 01:10:33.768   945  1043 D RIL     : onRequest: SCREEN_STATE
07-12 01:10:33.768  1474  1534 D RilRequest: [3652]< SCREEN_STATE error: com.android.internal.telephony.CommandException: RADIO_NOT_AVAILABLE ret=
07-12 01:10:33.769  1474  1474 D RILJ    : [3653]> RIL_REQUEST_START_LCE [SUB0]
07-12 01:10:33.770  1474  1474 D RILJ    : setPhoneType=1 old value=0 [SUB0]
07-12 01:10:33.770   945  1043 D RIL     : onRequest: <unknown request>
07-12 01:10:33.770  1474  1534 D RilRequest: [3653]< RIL_REQUEST_START_LCE error: com.android.internal.telephony.CommandException: RADIO_NOT_AVAILABLE ret=
07-12 01:10:33.774  1071  1085 D TelephonyRegistry: listen oscl: hasNotifySubscriptionInfoChangedOccurred==false no callback
07-12 01:10:33.774  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.network.type value: Unknown propVal=Unknown
07-12 01:10:33.775  1474  1474 D RILJ    : [3654]> SIGNAL_STRENGTH [SUB0]
07-12 01:10:33.776   945  1043 D RIL     : onRequest: SIGNAL_STRENGTH
07-12 01:10:33.776  1474  1534 D RilRequest: [3654]< SIGNAL_STRENGTH error: com.android.internal.telephony.CommandException: RADIO_NOT_AVAILABLE ret=
07-12 01:10:33.777  1474  1474 D DCT     : [0]DCT.constructor
07-12 01:10:33.777  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.780  1474  1474 D DCT     : [0]getDataEnabled: getIntWithSubId retVal=true
07-12 01:10:33.785  1071  1087 D TelephonyRegistry: listen oscl: hasNotifySubscriptionInfoChangedOccurred==false no callback
07-12 01:10:33.788  1474  1474 D Dcc     : E ctor
07-12 01:10:33.788  1474  1474 D Dcc     : X ctor
07-12 01:10:33.789  1474  1474 D SubscriptionController: [getPhoneId] asked for default subId=-1
07-12 01:10:33.789  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.790  1474  1474 D DcTesterFailBrinupAll: register for intent action=com.android.internal.telephony.dataconnection.action_fail_bringup
07-12 01:10:33.790  1474  1474 D DcTesterFailBrinupAll: register for intent action=com.android.internal.telephony.gsm.action_detached
07-12 01:10:33.790  1474  1474 D DcTesterFailBrinupAll: register for intent action=com.android.internal.telephony.gsm.action_attached
07-12 01:10:33.790  1474  1536 D DcTesterDeacativeAll: register for intent action=com.android.internal.telephony.dataconnection.action_deactivate_all
07-12 01:10:33.790  1474  1536 D DcTesterDeacativeAll: register for intent action=com.android.internal.telephony.gsm.action_detached
07-12 01:10:33.790  1474  1536 D Dcc     : DccDefaultState: msg.what=EVENT_RIL_CONNECTED mRilVersion=11
07-12 01:10:33.791  1474  1474 D DCT     : [0]GsmDCT.constructor
07-12 01:10:33.791  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.791  1474  1474 D DCT     : [0]update sub = -2
07-12 01:10:33.791  1474  1474 D DCT     : [0]update(): Active DDS, register for all events now!
07-12 01:10:33.791  1474  1474 D GsmSST  : [GsmSST] notifyDataRegStateRilRadioTechnologyChanged: drs=1 rat=0
07-12 01:10:33.791  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.network.type value: Unknown propVal=Unknown
07-12 01:10:33.791  1474  1474 D DCT     : [0]getDataEnabled: getIntWithSubId retVal=true
07-12 01:10:33.792  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.792  1474  1474 D GSMPhone: [GSMPhone] updateCurrentCarrierInProvider: mSubId = -2 currentDds = 1 operatorNumeric = null
07-12 01:10:33.792  1474  1474 D DCT     : [0]initApnContexts: E
07-12 01:10:33.792  1474  1474 D DCT     : [0]initApnContexts: skipping unknown type=1
07-12 01:10:33.793  1474  1474 D DCT     : [0]initApnContexts: apnContext={mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=dataEnabled mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.793  1474  1474 D DCT     : [0]initApnContexts: apnContext={mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=dataEnabled mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.793  1474  1474 D DCT     : [0]initApnContexts: apnContext={mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=dataEnabled mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.793  1474  1474 D DCT     : [0]initApnContexts: apnContext={mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=dataEnabled mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.793  1474  1474 D DCT     : [0]initApnContexts: apnContext={mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=dataEnabled mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.793  1474  1474 D DCT     : [0]initApnContexts: apnContext={mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=dataEnabled mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.793  1474  1474 D DCT     : [0]initApnContexts: apnContext={mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=dataEnabled mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.793  1474  1474 D DCT     : [0]initApnContexts: skipping unknown type=13
07-12 01:10:33.793  1474  1474 D DCT     : [0]initApnContexts: apnContext={mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=dataEnabled mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.793  1474  1474 D DCT     : [0]initApnContexts: apnContext={mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=dataEnabled mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.793  1474  1474 D DCT     : [0]initApnContexts: X mApnContexts={default={mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=dataEnabled mDataEnabled=false mDependencyMet=true}, mms={mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=dataEnabled mDataEnabled=false mDependencyMet=true}, cbs={mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=dataEnabled mDataEnabled=false mDependencyMet=true}, fota={mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=dataEnabled mDataEnabled=false mDependencyMet=true}, supl={mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=dataEnabled mDataEnabled=false mDependencyMet=true}, ia={mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=dataEnabled mDataEnabled=false mDependencyMet=true}, emergency={mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=dataEnabled mDataEnabled=false mDependencyMet=true}, hipri={mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=dataEnabled mDataEnabled=false mDependencyMet=true}, ims={mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=dataEnabled mDataEnabled=false mDependencyMet=true}}
07-12 01:10:33.799  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.current.phone-type value: 1 propVal=1
07-12 01:10:33.800  1474  1474 D GSMPhone: [GSMPhone] GSMPhone: constructor: sub = 0
07-12 01:10:33.800  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.current.phone-type value: 1 propVal=1
07-12 01:10:33.800  1474  1474 I PhoneFactory: Creating Phone with type = 1 sub = 0
07-12 01:10:33.802  1474  1474 E RIL_ImsSms: getFormat should never be called from here!
07-12 01:10:33.802  1474  1474 D SMSDispatcher: SMSDispatcher: ctor mSmsCapable=true format=unknown mSmsSendDisabled=false
07-12 01:10:33.802  1474  1474 D RIL_ImsSms: ImsSMSDispatcher created
07-12 01:10:33.802  1474  1474 D SMSDispatcher: SMSDispatcher: ctor mSmsCapable=true format=3gpp2 mSmsSendDisabled=false
07-12 01:10:33.802  1474  1474 D CdmaSMSDispatcher: CdmaSMSDispatcher created
07-12 01:10:33.806  1474  1474 E WAP PUSH: bindService() for wappush manager failed
07-12 01:10:33.806  1474  1474 D GsmInboundSmsHandler: created InboundSmsHandler
07-12 01:10:33.809  1474  1474 E WAP PUSH: bindService() for wappush manager failed
07-12 01:10:33.809  1474  1474 D CdmaInboundSmsHandler: created InboundSmsHandler
07-12 01:10:33.811  1474  1474 D SMSDispatcher: SMSDispatcher: ctor mSmsCapable=true format=3gpp mSmsSendDisabled=false
07-12 01:10:33.811  1474  1474 D GsmSMSDispatcher: GsmSMSDispatcher created
07-12 01:10:33.817  1474  1474 D IccCardProxy: ctor: ci=com.android.internal.telephony.RIL@4379b56 phoneId=0
07-12 01:10:33.817  1474  1474 D CdmaSSM : subscriptionSource from settings: 1
07-12 01:10:33.817  1474  1474 D CdmaSSM : cdmaSSM constructor: 1
07-12 01:10:33.817  1474  1474 D IccCardProxy: update icc_operator_numeric=
07-12 01:10:33.817  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.sim.operator.numeric value:  propVal=
07-12 01:10:33.819  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.sim.operator.iso-country value:  propVal=
07-12 01:10:33.819  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.sim.operator.alpha value:  propVal=
07-12 01:10:33.819  1474  1474 E IccCardProxy: setExternalState: set mPhoneId=0 mExternalState=NOT_READY
07-12 01:10:33.819  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.sim.state value: NOT_READY propVal=NOT_READY
07-12 01:10:33.819  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.819  1474  1474 D IccCardProxy: broadcastIccStateChangedIntent intent ACTION_SIM_STATE_CHANGED value=NOT_READY reason=null for mPhoneId=0
07-12 01:10:33.820  1474  1474 D IccCardProxy: Setting radio tech UMTS
07-12 01:10:33.820  1474  1474 D TelephonyManager: getLteOnCdmaMode=0 curVal=-1 product_type='' lteOnCdmaProductType=''
07-12 01:10:33.820  1474  1474 D IccCardProxy: updateQuietMode: 3GPP subscription -> newQuietMode=false
07-12 01:10:33.820  1474  1474 D IccCardProxy: updateQuietMode: no changes don't setExternalState
07-12 01:10:33.820  1474  1474 D IccCardProxy: updateQuietMode: QuietMode is false (app_type=1 isLteOnCdmaMode=false cdmaSource=-1)
07-12 01:10:33.820  1474  1474 D ProxyController: Constructor - Enter
07-12 01:10:33.820  1474  1474 D DctController: makeDctController: new DctController phones.length=1
07-12 01:10:33.820  1474  1474 D DctController: DctController(): phones.length=1
07-12 01:10:33.822  1474  1542 D SmsBroadcastUndelivered: scanning raw table for undelivered messages
07-12 01:10:33.824  1474  1474 D DcSwitchSM: [DcSwitchStateMachine-0] DcSwitchState constructor E
07-12 01:10:33.824  1474  1474 D DcSwitchSM: [DcSwitchStateMachine-0] DcSwitchState constructor X
07-12 01:10:33.824  1474  1544 D DcSwitchSM: [DcSwitchStateMachine-0] IdleState: enter
07-12 01:10:33.832  1474  1474 D DctController: DctController(phones): Connect success: 0
07-12 01:10:33.832  1474  1474 D DctController: updatePhoneBaseForIndex for phone index=0
07-12 01:10:33.832  1474  1474 D DctController: unregister TelephonyNetworkFactory for phone index=0
07-12 01:10:33.833  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.833  1474  1474 D DctController: [TNF -2]NetworkCapabilities: [ Transports: CELLULAR Capabilities: MMS&SUPL&DUN&FOTA&IMS&CBS&IA&RCS&XCAP&EIMS&INTERNET&NOT_RESTRICTED&TRUSTED&NOT_VPN]
07-12 01:10:33.834  1071  1085 D TelephonyRegistry: listen oscl: hasNotifySubscriptionInfoChangedOccurred==false no callback
07-12 01:10:33.834  1474  1474 D DctController: makeDctController: X sDctController=Handler (com.android.internal.telephony.dataconnection.DctController) {b8914eb}
07-12 01:10:33.834  1474  1474 D ProxyController: clearTransaction
07-12 01:10:33.834  1474  1474 D ProxyController: clearTransaction: phoneId=0 status=IDLE
07-12 01:10:33.834  1474  1474 D ProxyController: Constructor - Exit
07-12 01:10:33.835  1474  1474 I PhoneFactory: defaultSmsApplication: NONE
07-12 01:10:33.836  1474  1474 I PhoneFactory: Creating SubInfoRecordUpdater 
07-12 01:10:33.836  1474  1474 D SubscriptionInfoUpdater: Constructor invoked
07-12 01:10:33.841  1474  1474 D CallManager: registerPhone(GSM Handler (com.android.internal.telephony.PhoneProxy) {c01aaf4})
07-12 01:10:33.847  1474  1542 D SmsBroadcastUndelivered: finished scanning raw table in 24 ms
07-12 01:10:33.847  1474  1538 D GsmInboundSmsHandler: StartupState.processMessage:6
07-12 01:10:33.848  1474  1538 D GsmInboundSmsHandler: entering Idle state
07-12 01:10:33.848  1474  1540 D CdmaInboundSmsHandler: StartupState.processMessage:6
07-12 01:10:33.848  1474  1540 D CdmaInboundSmsHandler: entering Idle state
07-12 01:10:33.850  1071  1087 D TelephonyRegistry: listen oscl: hasNotifySubscriptionInfoChangedOccurred==false no callback
07-12 01:10:33.852  1474  1517 D SubscriptionController: [getPhoneId]- no sims, returning default phoneId=2147483647
07-12 01:10:33.857  1474  1474 D RILJ    : [3655]> RIL_REQUEST_SET_TTY_MODE : 0 [SUB0]
07-12 01:10:33.858   945  1043 D RIL     : onRequest: SET_TTY_MODE
07-12 01:10:33.858  1474  1534 D RilRequest: [3655]< RIL_REQUEST_SET_TTY_MODE error: com.android.internal.telephony.CommandException: RADIO_NOT_AVAILABLE ret=
07-12 01:10:33.858  1071  1087 D TelephonyRegistry: listen oscl: hasNotifySubscriptionInfoChangedOccurred==false no callback
07-12 01:10:33.858  1474  1474 D SubscriptionController: [getPhoneId] asked for default subId=-1
07-12 01:10:33.858  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.859  1474  1474 D UiccController: EVENT_RADIO_UNAVAILABLE, dispose card
07-12 01:10:33.859  1474  1474 D PhoneBase: config LCE service failed: com.android.internal.telephony.CommandException: RADIO_NOT_AVAILABLE
07-12 01:10:33.859  1474  1474 D GsmSST  : [GsmSST] mDeviceShuttingDown = false
07-12 01:10:33.859  1474  1474 D GsmSST  : [GsmSST] mDesiredPowerState = true
07-12 01:10:33.859  1474  1474 D GsmSST  : [GsmSST] getRadioState = RADIO_OFF
07-12 01:10:33.859  1474  1474 D GsmSST  : [GsmSST] mPowerOffDelayNeed = true
07-12 01:10:33.859  1474  1474 D GsmSST  : [GsmSST] mAlarmSwitch = false
07-12 01:10:33.859  1474  1474 D RILJ    : [3656]> RADIO_POWER on [SUB0]
07-12 01:10:33.859   945  1043 D RIL     : onRequest: RADIO_POWER
07-12 01:10:33.859   945  1043 D AT      : AT> AT+CFUN=1
07-12 01:10:33.859   945  1045 D AT      : AT< OK
07-12 01:10:33.859   945  1043 D RIL     : setRadioState(10)
07-12 01:10:33.860  1474  1534 D RILJ    : [UNSL]< UNSOL_RESPONSE_RADIO_STATE_CHANGED RADIO_ON [SUB0]
07-12 01:10:33.860  1474  1534 D RILJ    : [UNSL]< UNSOL_RESPONSE_SIM_STATUS_CHANGED [SUB0]
07-12 01:10:33.860  1474  1534 D RILJ    : [3656]< RADIO_POWER  [SUB0]
07-12 01:10:33.860  1474  1474 D RILJ    : [3657]> OPERATOR [SUB0]
07-12 01:10:33.860   945  1043 D RIL     : onRequest: OPERATOR
07-12 01:10:33.860   945  1043 D AT      : AT> AT+COPS=3,0;+COPS?;+COPS=3,1;+COPS?;+COPS=3,2;+COPS?
07-12 01:10:33.860   945  1045 D AT      : AT< +COPS: 0,0,"Android"
07-12 01:10:33.860   945  1045 D AT      : AT< +COPS: 0,1,"Android"
07-12 01:10:33.860   945  1045 D AT      : AT< +COPS: 0,2,"310260"
07-12 01:10:33.860   945  1045 D AT      : AT< OK
07-12 01:10:33.860  1474  1534 D RILJ    : [3657]< OPERATOR {Android, Android, 310260} [SUB0]
07-12 01:10:33.861  1474  1474 D RILJ    : [3658]> DATA_REGISTRATION_STATE [SUB0]
07-12 01:10:33.861   945  1043 D RIL     : onRequest: DATA_REGISTRATION_STATE
07-12 01:10:33.861   945  1043 D RIL     : requestRegistrationState
07-12 01:10:33.861   945  1043 D AT      : AT> AT+CGREG?
07-12 01:10:33.861   945  1045 D AT      : AT< +CGREG: 1,1,"ffffffff","ffffffff","0003"
07-12 01:10:33.861   945  1045 D AT      : AT< OK
07-12 01:10:33.861   945  1043 D RIL     : parseRegistrationState. Parsing: +CGREG: 1,1,"ffffffff","ffffffff","0003"
07-12 01:10:33.861   945  1043 D RIL     : registration state type: 3GPP
07-12 01:10:33.861  1474  1534 D RILJ    : [3658]< DATA_REGISTRATION_STATE {1, ffffffff, ffffffff, 3, null, null} [SUB0]
07-12 01:10:33.861  1474  1474 D RILJ    : [3659]> VOICE_REGISTRATION_STATE [SUB0]
07-12 01:10:33.862   945  1043 D RIL     : onRequest: VOICE_REGISTRATION_STATE
07-12 01:10:33.862   945  1043 D RIL     : requestRegistrationState
07-12 01:10:33.862   945  1043 D AT      : AT> AT+CREG?
07-12 01:10:33.862   945  1045 D AT      : AT< +CREG: 2,1, "ffffffff", "ffffffff"
07-12 01:10:33.862   945  1045 D AT      : AT< OK
07-12 01:10:33.862   945  1043 D RIL     : parseRegistrationState. Parsing: +CREG: 2,1, "ffffffff", "ffffffff"
07-12 01:10:33.862   945  1043 D RIL     : registration state type: 3GPP
07-12 01:10:33.862  1474  1534 D RILJ    : [3659]< VOICE_REGISTRATION_STATE {1, ffffffff, ffffffff, 0, null, null, null, null, null, null, null, null, null, null, null} [SUB0]
07-12 01:10:33.862  1474  1474 D RILJ    : [3660]> QUERY_NETWORK_SELECTION_MODE [SUB0]
07-12 01:10:33.862  1474  1474 D GsmSST  : [GsmSST] NITZ: 17/07/12:01:10:29+48:0:Unknown!Unknown,1667 start=9868 delay=8201
07-12 01:10:33.862   945  1043 D RIL     : onRequest: QUERY_NETWORK_SELECTION_MODE
07-12 01:10:33.863   945  1043 D AT      : AT> AT+COPS?
07-12 01:10:33.863   945  1045 D AT      : AT< +COPS: 0,2,310260
07-12 01:10:33.863   945  1045 D AT      : AT< OK
07-12 01:10:33.863  1474  1534 D RILJ    : [3660]< QUERY_NETWORK_SELECTION_MODE {0} [SUB0]
07-12 01:10:33.863  1474  1474 D GsmSST  : [GsmSST] setAndBroadcastNetworkSetTimeZone: setTimeZone=GMT
07-12 01:10:33.863  1474  1474 D GsmSST  : [GsmSST] setAndBroadcastNetworkSetTimeZone: call alarm.setTimeZone and broadcast zoneId=GMT
07-12 01:10:33.921  1474  1474 D GsmSST  : [GsmSST] NITZ: Setting time of day to Wed Jul 12 01:10:37 GMT+00:00 2017 NITZ receive delay(ms): 8203 gained(ms): 3282 from 17/07/12:01:10:29+48:0:Unknown!Unknown
07-12 01:10:33.921  1474  1474 D GsmSST  : [GsmSST] setAndBroadcastNetworkSetTime: time=1499821837203ms
07-12 01:10:33.927  1474  1474 I GsmSST  : NITZ: after Setting time of day
07-12 01:10:33.927  1474  1474 D GsmSST  : [GsmSST] onSignalStrengthResult() Exception from RIL : com.android.internal.telephony.CommandException: RADIO_NOT_AVAILABLE
07-12 01:10:33.927  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.927  1474  1474 D DefaultPhoneNotifier: notifySignalStrength: mRegistry=com.android.internal.telephony.ITelephonyRegistry$Stub$Proxy@6874fde ss=SignalStrength: 99 -1 -1 -1 -1 -1 -1 99 2147483647 2147483647 2147483647 2147483647 2147483647 gsm|lte sender=Handler (com.android.internal.telephony.gsm.GSMPhone) {b84521d}
07-12 01:10:33.927  1071  1087 D TelephonyRegistry: notifySignalStrengthForSubscriber: invalid phoneId=-1
07-12 01:10:33.928  1474  1474 D DCT     : [0]handleMessage msg={ when=-150ms what=270369 obj=android.os.AsyncResult@5a6d5bf target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:33.928  1474  1474 D DCT     : [0]handleMessage msg={ when=-138ms what=270337 obj=android.os.AsyncResult@de3648c target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:33.928  1474  1474 D DCT     : [0]onRadioAvailable
07-12 01:10:33.928  1474  1474 D DCT     : [0]overall state is IDLE
07-12 01:10:33.928  1474  1474 D DCT     : [0]handleMessage msg={ when=-138ms what=270342 obj=android.os.AsyncResult@2bca7d5 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:33.928  1474  1474 D DCT     : [0]onRadioOffOrNotAvailable: is off and clean up all connections
07-12 01:10:33.928  1474  1474 D DCT     : [0]cleanUpAllConnections: tearDown=false reason=radioTurnedOff
07-12 01:10:33.929  1474  1474 D DCT     : [0]cleanUpConnection: tearDown=false reason=radioTurnedOff apnContext={mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.929  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.932  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.932  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.933  1474  1474 D DCT     : [0]cleanUpConnection: X tearDown=false reason=radioTurnedOff apnContext={mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true} dcac=null
07-12 01:10:33.933  1474  1474 D DCT     : [0]cleanUpConnection: tearDown=false reason=radioTurnedOff apnContext={mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.933  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.934  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.935  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.937  1474  1474 D DCT     : [0]cleanUpConnection: X tearDown=false reason=radioTurnedOff apnContext={mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true} dcac=null
07-12 01:10:33.937  1474  1474 D DCT     : [0]cleanUpConnection: tearDown=false reason=radioTurnedOff apnContext={mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.937  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.937  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.938  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.938  1474  1474 D DCT     : [0]cleanUpConnection: X tearDown=false reason=radioTurnedOff apnContext={mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true} dcac=null
07-12 01:10:33.938  1474  1474 D DCT     : [0]cleanUpConnection: tearDown=false reason=radioTurnedOff apnContext={mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.938  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.938  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.939  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.940  1474  1474 D DCT     : [0]cleanUpConnection: X tearDown=false reason=radioTurnedOff apnContext={mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true} dcac=null
07-12 01:10:33.940  1474  1474 D DCT     : [0]cleanUpConnection: tearDown=false reason=radioTurnedOff apnContext={mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.940  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.941  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.941  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.941  1474  1474 D DCT     : [0]cleanUpConnection: X tearDown=false reason=radioTurnedOff apnContext={mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true} dcac=null
07-12 01:10:33.941  1474  1474 D DCT     : [0]cleanUpConnection: tearDown=false reason=radioTurnedOff apnContext={mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.941  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.942  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.942  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.942  1474  1474 D DCT     : [0]cleanUpConnection: X tearDown=false reason=radioTurnedOff apnContext={mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true} dcac=null
07-12 01:10:33.942  1474  1474 D DCT     : [0]cleanUpConnection: tearDown=false reason=radioTurnedOff apnContext={mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.942  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.943  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.943  1474  1474 D DCT     : [0]cleanUpConnection: X tearDown=false reason=radioTurnedOff apnContext={mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true} dcac=null
07-12 01:10:33.943  1474  1474 D DCT     : [0]cleanUpConnection: tearDown=false reason=radioTurnedOff apnContext={mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.943  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.943  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.943  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.944  1474  1474 D DCT     : [0]cleanUpConnection: X tearDown=false reason=radioTurnedOff apnContext={mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true} dcac=null
07-12 01:10:33.944  1474  1474 D DCT     : [0]cleanUpConnection: tearDown=false reason=radioTurnedOff apnContext={mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.944  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.944  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.944  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.944  1474  1474 D DCT     : [0]cleanUpConnection: X tearDown=false reason=radioTurnedOff apnContext={mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true} dcac=null
07-12 01:10:33.944  1474  1474 D DCT     : [0]stopNetStatPoll
07-12 01:10:33.944  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.944  1474  1474 D DCT     : [0]cleanUpConnection: mDisconnectPendingCount = 0
07-12 01:10:33.944  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.945  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.945  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.945  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.945  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.945  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.946  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.946  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.946  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.946  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.946  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.946  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.947  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.947  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.947  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.947  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.947  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.947  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.948  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.948  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.948  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.948  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.948  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.949  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.949  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.949  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.950  1474  1474 D DCT     : [0]handleMessage msg={ when=-159ms what=270345 obj=android.os.AsyncResult@9348bea target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:33.950  1474  1474 D DCT     : [0]onDataConnectionDetached: stop polling and notify detached
07-12 01:10:33.950  1474  1474 D DCT     : [0]stopNetStatPoll
07-12 01:10:33.950  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.950  1474  1474 D DCT     : [0]notifyDataConnection: reason=dataDetached
07-12 01:10:33.950  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.955  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.955  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.956  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.957  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.957  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.958  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.958  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.958  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.958  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.958  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.958  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.959  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.959  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.959  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.960  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.960  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.960  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.960  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.960  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.961  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.961  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.961  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.961  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.961  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.962  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.963  1474  1474 D DCT     : [0]handleMessage msg={ when=-172ms what=270348 obj=android.os.AsyncResult@efd0edb target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:33.963  1474  1474 D DCT     : [0]onRoamingOff
07-12 01:10:33.963  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.964  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.964  1474  1474 D DCT     : [0]notifyDataConnection: reason=roamingOff
07-12 01:10:33.964  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.964  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.964  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.964  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.964  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.965  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.966  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.966  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.966  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.966  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.966  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.966  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.967  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.967  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.967  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.967  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.967  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.967  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.968  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.968  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.968  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.968  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.968  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.969  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.969  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - Attached= false - SIM not loaded
07-12 01:10:33.969  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.969  1474  1474 D DCT     : [0]handleMessage msg={ when=-179ms what=270377 obj=android.os.AsyncResult@4a83d78 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:33.970  1474  1474 D DCT     : [0]setupDataOnConnectableApns: nwTypeChanged
07-12 01:10:33.970  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.970  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.970  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.970  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.970  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.970  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.970  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.970  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.970  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:33.970  1474  1474 D RILJ    : [3661]> BASEBAND_VERSION [SUB0]
07-12 01:10:33.974   945  1043 D RIL     : onRequest: BASEBAND_VERSION
07-12 01:10:33.974   945  1043 D RIL     : Request not supported. Tech: 0
07-12 01:10:33.974  1474  1534 D RilRequest: [3661]< BASEBAND_VERSION error: com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED ret=
07-12 01:10:33.974  1474  1474 D RILJ    : [3662]> GET_IMEI [SUB0]
07-12 01:10:33.976   945  1043 D RIL     : onRequest: GET_IMEI
07-12 01:10:33.976   945  1043 D AT      : AT> AT+CGSN
07-12 01:10:33.976   945  1045 D AT      : AT< 000000000000000
07-12 01:10:33.976   945  1045 D AT      : AT< OK
07-12 01:10:33.976  1474  1534 D RILJ    : [3662]< GET_IMEI  [SUB0]
07-12 01:10:33.976  1474  1474 D RILJ    : [3663]> GET_IMEISV [SUB0]
07-12 01:10:33.981   945  1043 D RIL     : onRequest: GET_IMEISV
07-12 01:10:33.981   945  1043 D RIL     : Request not supported. Tech: 0
07-12 01:10:33.981  1474  1534 D RilRequest: [3663]< GET_IMEISV error: com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED ret=
07-12 01:10:33.981  1474  1474 D RILJ    : [3664]> RIL_REQUEST_GET_RADIO_CAPABILITY [SUB0]
07-12 01:10:33.984  1474  1474 D RILJ    : [3665]> RIL_REQUEST_START_LCE [SUB0]
07-12 01:10:33.985   945  1043 D RIL     : onRequest: RIL_REQUEST_GET_RADIO_CAPABILITY
07-12 01:10:33.985   945  1043 D RIL     : Request not supported. Tech: 0
07-12 01:10:33.985  1474  1534 D RILJ    : Faking RIL_REQUEST_GET_RADIO_CAPABILITY response using 1 [SUB0]
07-12 01:10:33.985  1474  1534 D RILJ    : [3664]< RIL_REQUEST_GET_RADIO_CAPABILITY {mPhoneId = 0 mVersion=1 mSession=0 mPhase=0 mRadioAccessFamily=1 mLogicModemId= mStatus=1} [SUB0]
07-12 01:10:33.985  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.985  1474  1474 D GsmSMSDispatcher: GsmSMSDispatcher: subId = -2 slotId = 0
07-12 01:10:33.985   945  1043 D RIL     : onRequest: <unknown request>
07-12 01:10:33.985   945  1043 D RIL     : Request not supported. Tech: 0
07-12 01:10:33.986  1474  1474 D SubscriptionController: [getPhoneId] asked for default subId=-1
07-12 01:10:33.986  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:33.986  1474  1474 E IccCardProxy: setExternalState: !override and newstate unchanged from NOT_READY
07-12 01:10:33.986  1474  1474 E IccCardProxy: setExternalState: !override and newstate unchanged from NOT_READY
07-12 01:10:33.986  1474  1474 D DctController: EVENT_PHONE1_DATA_DETACH.
07-12 01:10:33.986  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.986  1474  1474 D DctController: [TNF -2]got request NetworkRequest [ id=1, legacyType=-1, [ Capabilities: INTERNET&NOT_RESTRICTED&TRUSTED&NOT_VPN] ] with score 70
07-12 01:10:33.986  1474  1474 D SubscriptionInfoUpdater: [Receiver]+
07-12 01:10:33.986  1474  1474 D SubscriptionInfoUpdater: Action: android.intent.action.SIM_STATE_CHANGED
07-12 01:10:33.986  1474  1474 D SubscriptionInfoUpdater: slotId: 0
07-12 01:10:33.986  1474  1474 D SubscriptionInfoUpdater: simStatus: NOT_READY
07-12 01:10:33.986  1474  1474 D SubscriptionInfoUpdater: Ignoring simStatus: NOT_READY
07-12 01:10:33.986  1474  1474 D SubscriptionInfoUpdater: [Receiver]-
07-12 01:10:33.986  1474  1474 D DebugService: DebugService DebugService:
07-12 01:10:33.987  1474  1544 D DcSwitchSM: [DcSwitchStateMachine-0] DefaultState: shouldn't happen but ignore msg.what=0x44008
07-12 01:10:33.990  1474  1534 D RilRequest: [3665]< RIL_REQUEST_START_LCE error: com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED ret=
07-12 01:10:33.990  1474  1474 D RILJ    : [3666]> RIL_REQUEST_QUERY_TTY_MODE [SUB0]
07-12 01:10:33.991   945  1043 D RIL     : onRequest: QUERY_TTY_MODE
07-12 01:10:33.991   945  1043 D RIL     : Request not supported. Tech: 0
07-12 01:10:33.991  1474  1534 D RilRequest: [3666]< RIL_REQUEST_QUERY_TTY_MODE error: com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED ret=
07-12 01:10:33.991  1474  1474 D DCT     : [0]handleMessage msg={ when=-132ms what=270369 obj=android.os.AsyncResult@2b3bdb7 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:33.991  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.991  1474  1474 D GsmSMSDispatcher: GsmSMSDispatcher: subId = -2 slotId = 0
07-12 01:10:33.991  1474  1474 E IccCardProxy: setExternalState: !override and newstate unchanged from NOT_READY
07-12 01:10:33.991  1474  1474 D GsmSST  : [GsmSST] mDeviceShuttingDown = false
07-12 01:10:33.991  1474  1474 D GsmSST  : [GsmSST] mDesiredPowerState = true
07-12 01:10:33.991  1474  1474 D GsmSST  : [GsmSST] getRadioState = RADIO_ON
07-12 01:10:33.991  1474  1474 D GsmSST  : [GsmSST] mPowerOffDelayNeed = true
07-12 01:10:33.991  1474  1474 D GsmSST  : [GsmSST] mAlarmSwitch = false
07-12 01:10:33.991  1474  1474 D RILJ    : [3667]> OPERATOR [SUB0]
07-12 01:10:33.992  1474  1474 D RILJ    : [3668]> DATA_REGISTRATION_STATE [SUB0]
07-12 01:10:33.992   945  1043 D RIL     : onRequest: OPERATOR
07-12 01:10:33.992   945  1043 D AT      : AT> AT+COPS=3,0;+COPS?;+COPS=3,1;+COPS?;+COPS=3,2;+COPS?
07-12 01:10:33.992   945  1045 D AT      : AT< +COPS: 0,0,"Android"
07-12 01:10:33.992   945  1045 D AT      : AT< +COPS: 0,1,"Android"
07-12 01:10:33.992   945  1045 D AT      : AT< +COPS: 0,2,"310260"
07-12 01:10:33.992   945  1045 D AT      : AT< OK
07-12 01:10:33.993  1474  1534 D RILJ    : [3667]< OPERATOR {Android, Android, 310260} [SUB0]
07-12 01:10:33.993  1474  1474 D RILJ    : [3669]> VOICE_REGISTRATION_STATE [SUB0]
07-12 01:10:33.993   945  1043 D RIL     : onRequest: DATA_REGISTRATION_STATE
07-12 01:10:33.993   945  1043 D RIL     : requestRegistrationState
07-12 01:10:33.993   945  1043 D AT      : AT> AT+CGREG?
07-12 01:10:33.993   945  1045 D AT      : AT< +CGREG: 1,1,"ffffffff","ffffffff","0003"
07-12 01:10:33.993   945  1045 D AT      : AT< OK
07-12 01:10:33.993  1474  1474 D RILJ    : [3670]> QUERY_NETWORK_SELECTION_MODE [SUB0]
07-12 01:10:33.993   945  1043 D RIL     : parseRegistrationState. Parsing: +CGREG: 1,1,"ffffffff","ffffffff","0003"
07-12 01:10:33.993   945  1043 D RIL     : registration state type: 3GPP
07-12 01:10:33.994   945  1043 D RIL     : onRequest: VOICE_REGISTRATION_STATE
07-12 01:10:33.994   945  1043 D RIL     : requestRegistrationState
07-12 01:10:33.994   945  1043 D AT      : AT> AT+CREG?
07-12 01:10:33.994   945  1045 D AT      : AT< +CREG: 2,1, "ffffffff", "ffffffff"
07-12 01:10:33.994   945  1045 D AT      : AT< OK
07-12 01:10:33.994  1474  1474 D UiccController: Received EVENT_ICC_STATUS_CHANGED, calling getIccCardStatus
07-12 01:10:33.994  1474  1474 D RILJ    : [3671]> GET_SIM_STATUS [SUB0]
07-12 01:10:33.994   945  1043 D RIL     : parseRegistrationState. Parsing: +CREG: 2,1, "ffffffff", "ffffffff"
07-12 01:10:33.994   945  1043 D RIL     : registration state type: 3GPP
07-12 01:10:33.994   945  1043 D RIL     : onRequest: QUERY_NETWORK_SELECTION_MODE
07-12 01:10:33.994   945  1043 D AT      : AT> AT+COPS?
07-12 01:10:33.994   945  1045 D AT      : AT< +COPS: 0,2,310260
07-12 01:10:33.994   945  1045 D AT      : AT< OK
07-12 01:10:33.994  1474  1474 D RILJ    : [3672]> GET_CURRENT_CALLS [SUB0]
07-12 01:10:33.994   945  1043 D RIL     : onRequest: GET_SIM_STATUS
07-12 01:10:33.994   945  1043 D RIL     : getSIMStatus(). sState: 10
07-12 01:10:33.994   945  1043 D AT      : AT> AT+CPIN?
07-12 01:10:33.995   945  1045 D AT      : AT< +CPIN: READY
07-12 01:10:33.995   945  1045 D AT      : AT< OK
07-12 01:10:33.995  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.995  1474  1474 D RILJ    : [3673]> RIL_REQUEST_VOICE_RADIO_TECH [SUB0]
07-12 01:10:33.995   945  1043 D RIL     : onRequest: GET_CURRENT_CALLS
07-12 01:10:33.995   945  1043 D AT      : AT> AT+CLCC
07-12 01:10:33.995   945  1045 D AT      : AT< OK
07-12 01:10:33.995  1474  1474 D RILJ    : [3674]> RIL_REQUEST_IMS_REGISTRATION_STATE [SUB0]
07-12 01:10:33.995   945  1043 D RIL     : onRequest: VOICE_RADIO_TECH
07-12 01:10:33.996  1474  1474 D RILJ    : [3675]> RIL_REQUEST_CDMA_GET_SUBSCRIPTION_SOURCE [SUB0]
07-12 01:10:33.996   945  1043 D RIL     : onRequest: IMS_REGISTRATION_STATE
07-12 01:10:33.996   945  1043 D RIL     : IMS_REGISTRATION=0, format=1 
07-12 01:10:33.996  1474  1474 D UiccController: Received EVENT_ICC_STATUS_CHANGED, calling getIccCardStatus
07-12 01:10:33.996  1474  1474 D RILJ    : [3676]> GET_SIM_STATUS [SUB0]
07-12 01:10:33.996   945  1043 D RIL     : onRequest: CDMA_GET_SUBSCRIPTION_SOURCE
07-12 01:10:33.996   945  1043 D RIL     : Request not supported. Tech: 0
07-12 01:10:33.996  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.996  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.996  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.996  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.997  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.997  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.997  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.997  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.997  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.997  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.997  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.997  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.997  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.997  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.997  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.997  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.997  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.997  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.997  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.997  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.997  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.997  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.997  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.997  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.997  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.997  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.997  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.997  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.997  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.997  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.997  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.997  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.998  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.998  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.998  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.998  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.998  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.998  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.998  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.998  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.998  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.998  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.998  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.998  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.998  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.998  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.998  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.998  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.998  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.998  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.998  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.998  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.998  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.998  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.998  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.998  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.998  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.998  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.998  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.999  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.999  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.999  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.999  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.999  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.999  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.999  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.999  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.999  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.999  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:33.999  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:33.999  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.000  1474  1534 D RILJ    : [3668]< DATA_REGISTRATION_STATE {1, ffffffff, ffffffff, 3, null, null} [SUB0]
07-12 01:10:34.000  1474  1534 D RILJ    : [3669]< VOICE_REGISTRATION_STATE {1, ffffffff, ffffffff, 0, null, null, null, null, null, null, null, null, null, null, null} [SUB0]
07-12 01:10:34.000  1474  1534 D RILJ    : [3670]< QUERY_NETWORK_SELECTION_MODE {0} [SUB0]
07-12 01:10:34.001  1474  1534 D RILJ    : [3671]< GET_SIM_STATUS IccCardState {CARDSTATE_PRESENT,PINSTATE_UNKNOWN,num_apps=2,gsm_id=0{APPTYPE_SIM,APPSTATE_READY},cdma_id=1{APPTYPE_RUIM,APPSTATE_READY},ims_id=8} [SUB0]
07-12 01:10:34.001  1474  1534 D RILJ    : [3672]< GET_CURRENT_CALLS {} [SUB0]
07-12 01:10:34.001  1474  1534 D RILJ    : [3673]< RIL_REQUEST_VOICE_RADIO_TECH {1} [SUB0]
07-12 01:10:34.001  1474  1534 D RILJ    : [3674]< RIL_REQUEST_IMS_REGISTRATION_STATE {0, 1} [SUB0]
07-12 01:10:34.001  1474  1534 D RilRequest: [3675]< RIL_REQUEST_CDMA_GET_SUBSCRIPTION_SOURCE error: com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED ret=
07-12 01:10:34.001   945  1043 D RIL     : onRequest: GET_SIM_STATUS
07-12 01:10:34.001   945  1043 D RIL     : getSIMStatus(). sState: 10
07-12 01:10:34.001   945  1043 D AT      : AT> AT+CPIN?
07-12 01:10:34.001   945  1045 D AT      : AT< +CPIN: READY
07-12 01:10:34.001   945  1045 D AT      : AT< OK
07-12 01:10:34.001  1474  1534 D RILJ    : [3676]< GET_SIM_STATUS IccCardState {CARDSTATE_PRESENT,PINSTATE_UNKNOWN,num_apps=2,gsm_id=0{APPTYPE_SIM,APPSTATE_READY},cdma_id=1{APPTYPE_RUIM,APPSTATE_READY},ims_id=8} [SUB0]
07-12 01:10:34.001  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:34.001  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.001  1474  1474 D PhoneBase: EVENT_GET_RADIO_CAPABILITY :phone rc : {mPhoneId = 0 mVersion=1 mSession=0 mPhase=0 mRadioAccessFamily=1 mLogicModemId= mStatus=1}
07-12 01:10:34.001  1474  1474 D PhoneBase: config LCE service failed: com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED
07-12 01:10:34.002  1474  1474 E GsmSST  : [GsmSST] error parsing GprsRegistrationState: java.lang.NumberFormatException: Invalid int: "null"
07-12 01:10:34.002  1474  1474 D PHONE   : [ServiceState] setDataRegState=0
07-12 01:10:34.002  1474  1474 D PHONE   : [ServiceState] setDataRadioTechnology=3
07-12 01:10:34.002  1474  1474 D GsmSST  : [GsmSST] handlPollStateResultMessage: GsmSST setDataRegState=0 regState=1 dataRadioTechnology=3
07-12 01:10:34.002  1474  1474 E GsmSST  : [GsmSST] error parsing RegistrationState: java.lang.NumberFormatException: Invalid int: "ffffffff"
07-12 01:10:34.002  1474  1474 D PHONE   : [ServiceState] setVoiceRegState=0
07-12 01:10:34.002  1474  1474 E PHONE   : [ServiceState] setState deprecated use setVoiceRegState()
07-12 01:10:34.002  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.002  1474  1474 D GsmSST  : [GsmSST] Poll ServiceState done:  oldSS=[1 1 voice home data home null null null null null null  Unknown Unknown CSS not supported 0 0 RoamInd=0 DefRoamInd=0 EmergOnly=false IsDataRoamingFromRegistration=false] newSS=[0 0 voice home data home Android Android 310260 Android Android 310260  Unknown UMTS CSS not supported 0 0 RoamInd=0 DefRoamInd=0 EmergOnly=false IsDataRoamingFromRegistration=false] oldMaxDataCalls=1 mNewMaxDataCalls=1 oldReasonDataDenied=-1 mNewReasonDataDenied=-1
07-12 01:10:34.002  1474  1474 D PHONE   : [ServiceState] setNullState=1
07-12 01:10:34.002  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.network.type value: Unknown propVal=Unknown
07-12 01:10:34.003  1474  1474 D GsmSST  : [GsmSST] pollStateDone: registering current mNitzUpdatedTime=true changing to false
07-12 01:10:34.003  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.003  1474  1474 D GsmSST  : [GsmSST] updateSpnDisplay: changed sending intent rule=0 showPlmn='false' plmn='Android' showSpn='false' spn='' dataSpn='' subId='-2'
07-12 01:10:34.003  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.003  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.007  1474  1474 D SubscriptionController: [setPlmnSpn] No valid subscription to store info
07-12 01:10:34.007  1474  1474 D SubscriptionController: notifySubscriptionInfoChanged:
07-12 01:10:34.008  1071  1085 D TelephonyRegistry: notifySubscriptionInfoChanged: first invocation mRecords.size=14
07-12 01:10:34.008  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.operator.alpha value: Android propVal=Android
07-12 01:10:34.008  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.operator.numeric value: 310260 propVal=310260
07-12 01:10:34.008  1474  1474 D GsmSST  : [GsmSST] update mccmnc=310260 fromServiceState=true
07-12 01:10:34.009  1474  1474 D SubscriptionController: [getPhoneId]- no sims, returning default phoneId=2147483647
07-12 01:10:34.017  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.operator.iso-country value: us propVal=us
07-12 01:10:34.020  1474  1474 D GsmSST  : [GsmSST] pollStateDone: there are 6 unique offsets for iso-cc='us testOneUniqueOffsetPath=false', do nothing
07-12 01:10:34.020  1474  1474 D GsmSST  : [GsmSST] shouldFixTimeZoneNow: retVal=true iccCardExist=false operatorNumeric=310260 mcc=310 prevOperatorNumeric= prevMcc=311 needToFixTimeZone=true ltod=07-12 01:10:34.020
07-12 01:10:34.020  1474  1474 D GsmSST  : [GsmSST] pollStateDone: fix time zone zoneName='' mZoneOffset=43200000 mZoneDst=false iso-cc='us' iso-cc-idx=-21
07-12 01:10:34.020  1474  1474 D GsmSST  : [GsmSST] pollStateDone: using getTimeZone(off, dst, time, iso)
07-12 01:10:34.020  1474  1474 D GsmSST  : [GsmSST] pollStateDone: zone == null
07-12 01:10:34.020  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.operator.isroaming value: false propVal=false
07-12 01:10:34.021  1474  1474 D GsmSST  : [GsmSST] Broadcasting ServiceState : 0 0 voice home data home Android Android 310260 Android Android 310260  Unknown UMTS CSS not supported 0 0 RoamInd=0 DefRoamInd=0 EmergOnly=false IsDataRoamingFromRegistration=false
07-12 01:10:34.021  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.021  1474  1474 D DefaultPhoneNotifier: nofityServiceState: mRegistry=com.android.internal.telephony.ITelephonyRegistry$Stub$Proxy@6874fde ss=0 0 voice home data home Android Android 310260 Android Android 310260  Unknown UMTS CSS not supported 0 0 RoamInd=0 DefRoamInd=0 EmergOnly=false IsDataRoamingFromRegistration=false sender=Handler (com.android.internal.telephony.gsm.GSMPhone) {b84521d} phondId=0 subId=-2
07-12 01:10:34.021  1474  1474 D SubscriptionController: [getSlotId]- subId invalid
07-12 01:10:34.021  1474  1474 D SubscriptionController: getSimStateForSlotIdx:  simState=NOT_READY ordinal=6
07-12 01:10:34.021  1071  1085 D SubscriptionManager: getSimStateForSubscriber: simState=6 slotIdx=0
07-12 01:10:34.021  1071  1085 D TelephonyManager: getSimState: default sim:-1, sim state for slotIdx=0 is 6, return state as unknown
07-12 01:10:34.022  1474  1474 D GsmSST  : [GsmSST] notifyDataRegStateRilRadioTechnologyChanged: drs=0 rat=3
07-12 01:10:34.022  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.network.type value: UMTS propVal=UMTS
07-12 01:10:34.022  1474  1474 D DCT     : [0]get all active apn types
07-12 01:10:34.022  1474  1474 D UiccController: Received EVENT_GET_ICC_STATUS_DONE
07-12 01:10:34.022  1474  1474 D UiccCard: 2 applications
07-12 01:10:34.022  1474  1474 D UiccCardApplication: Creating UiccApp: {APPTYPE_SIM,APPSTATE_READY}
07-12 01:10:34.024  1474  1474 W VoiceMailConstants: Can't open /system/etc/voicemail-conf.xml
07-12 01:10:34.024  1474  1474 D SpnOverride: No SPN in OEM image = /oem/telephony/spn-conf.xml Load SPN from system image
07-12 01:10:34.024  1474  1474 W SpnOverride: Can not open /system/etc/spn-conf.xml
07-12 01:10:34.024  1474  1474 D SIMRecords: [SIMRecords] setting0 mMncLength-1
07-12 01:10:34.024  1474  1474 D SIMRecords: [SIMRecords] SIMRecords: onRadioOffOrNotAvailable set 'gsm.sim.operator.numeric' to operator=null
07-12 01:10:34.024  1474  1474 D SIMRecords: [SIMRecords] update icc_operator_numeric=null
07-12 01:10:34.024  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.sim.operator.numeric value:  propVal=
07-12 01:10:34.030  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.sim.operator.alpha value:  propVal=
07-12 01:10:34.030  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.sim.operator.iso-country value:  propVal=
07-12 01:10:34.030  1474  1474 D UiccCardApplication: Notifying 1 registrant: READY
07-12 01:10:34.031  1474  1474 D SIMRecords: [SIMRecords] getOperatorNumeric: IMSI == null
07-12 01:10:34.031  1474  1474 D SIMRecords: [SIMRecords] SIMRecords X ctor this=SimRecords: mDestroyed=false mContext=com.android.phone.PhoneGlobals@b82fc8d mCi=com.android.internal.telephony.RIL@4379b56 mFh=Handler (com.android.internal.telephony.uicc.SIMFileHandler) {1c6ae42} mParentApp=com.android.internal.telephony.uicc.UiccCardApplication@3bc7e53 recordsLoadedRegistrants=android.os.RegistrantList@cf14390 mImsiReadyRegistrants=android.os.RegistrantList@6afd489 mRecordsEventsRegistrants=android.os.RegistrantList@6956c8e mNewSmsRegistrants=android.os.RegistrantList@886acaf mNetworkSelectionModeAutomaticRegistrants=android.os.RegistrantList@84f08bc recordsToLoad=0 adnCache=Handler (com.android.internal.telephony.uicc.AdnRecordCache) {bb83045} recordsRequested=false iccid=null msisdnTag=null voiceMailNum=null voiceMailTag=null newVoiceMailNum=null newVoiceMailTag=null isVoiceMailFixed=false mncLength=-1 mailboxIndex=0 spn=null mVmConfigcom.android.internal.telephony.uicc.VoiceMailConstants@67fc39a mSpnOverride=mSpnOverride callForwardingEnabled=0 spnState=null mCphsInfo=null mCspPlmnEnabled=true efMWIS=null efCPHS_MWI=null mEfCff=null mEfCfis=null getOperatorNumeric=null
07-12 01:10:34.031  1474  1474 D RILJ    : [3677]> QUERY_FACILITY_LOCK [FD 7 null] [SUB0]
07-12 01:10:34.031   945  1043 D RIL     : onRequest: QUERY_FACILITY_LOCK
07-12 01:10:34.031   945  1043 D RIL     : Request not supported. Tech: 0
07-12 01:10:34.031  1474  1534 D RilRequest: [3677]< QUERY_FACILITY_LOCK error: com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED ret=
07-12 01:10:34.031  1474  1474 D RILJ    : [3678]> QUERY_FACILITY_LOCK [SC 7 null] [SUB0]
07-12 01:10:34.032  1474  1474 D UiccCardApplication: Creating UiccApp: {APPTYPE_RUIM,APPSTATE_READY}
07-12 01:10:34.032  1474  1474 D RuimRecords: [RuimRecords] setting0 mMncLength-1
07-12 01:10:34.032  1474  1474 D UiccCardApplication: Notifying 1 registrant: READY
07-12 01:10:34.033  1474  1474 D RuimRecords: [RuimRecords] RuimRecords X ctor this=RuimRecords: mDestroyed=false mContext=com.android.phone.PhoneGlobals@b82fc8d mCi=com.android.internal.telephony.RIL@4379b56 mFh=Handler (com.android.internal.telephony.uicc.RuimFileHandler) {51b64cb} mParentApp=com.android.internal.telephony.uicc.UiccCardApplication@561f4a8 recordsLoadedRegistrants=android.os.RegistrantList@5308bc1 mImsiReadyRegistrants=android.os.RegistrantList@8867f66 mRecordsEventsRegistrants=android.os.RegistrantList@af982a7 mNewSmsRegistrants=android.os.RegistrantList@635b354 mNetworkSelectionModeAutomaticRegistrants=android.os.RegistrantList@87922fd recordsToLoad=0 adnCache=Handler (com.android.internal.telephony.uicc.AdnRecordCache) {eb2bf2} recordsRequested=false iccid=null msisdnTag=null voiceMailNum=null voiceMailTag=null newVoiceMailNum=null newVoiceMailTag=null isVoiceMailFixed=false mncLength=-1 mailboxIndex=0 spn=null m_ota_commitedfalse mMyMobileNumber=xxxx mMin2Min1=null mPrlVersion=null mEFpl=null mEFli=null mCsimSpnDisplayCondition=false mMdn=null mMin=null mHomeSystemId=null mHomeNetworkId=null
07-12 01:10:34.033  1474  1474 D RILJ    : [3679]> QUERY_FACILITY_LOCK [FD 7 null] [SUB0]
07-12 01:10:34.033   945  1043 D RIL     : onRequest: QUERY_FACILITY_LOCK
07-12 01:10:34.033   945  1043 D RIL     : Request not supported. Tech: 0
07-12 01:10:34.033  1474  1534 D RilRequest: [3678]< QUERY_FACILITY_LOCK error: com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED ret=
07-12 01:10:34.033  1474  1474 D RILJ    : [3680]> QUERY_FACILITY_LOCK [SC 7 null] [SUB0]
07-12 01:10:34.033   945  1043 D RIL     : onRequest: QUERY_FACILITY_LOCK
07-12 01:10:34.033   945  1043 D RIL     : Request not supported. Tech: 0
07-12 01:10:34.034  1474  1534 D RilRequest: [3679]< QUERY_FACILITY_LOCK error: com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED ret=
07-12 01:10:34.034   945  1043 D RIL     : onRequest: QUERY_FACILITY_LOCK
07-12 01:10:34.034   945  1043 D RIL     : Request not supported. Tech: 0
07-12 01:10:34.034  1474  1534 D RilRequest: [3680]< QUERY_FACILITY_LOCK error: com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED ret=
07-12 01:10:34.036  1474  1474 D CAT     : CatService: registerForRecordsLoaded slotid=0 instance:Handler (com.android.internal.telephony.cat.CatService) {3421f9f}
07-12 01:10:34.037  1474  1474 D CAT     : CatService: Running CAT service on Slotid: 0. STK app installed:false
07-12 01:10:34.037  1474  1474 D UiccCard: Before privilege rules: null : CARDSTATE_PRESENT
07-12 01:10:34.037  1474  1474 D RILJ    : [3681]> RIL_REQUEST_SIM_OPEN_CHANNEL [SUB0]
07-12 01:10:34.037  1474  1474 E UiccCard: App index 8 is invalid since there are no applications
07-12 01:10:34.037  1474  1474 D UiccCard: update: radioState=RADIO_ON mLastRadioState=RADIO_UNAVAILABLE
07-12 01:10:34.038  1474  1474 D UiccController: Notifying IccChangedRegistrants
07-12 01:10:34.038   945  1043 D RIL     : onRequest: SIM_OPEN_CHANNEL
07-12 01:10:34.038   945  1043 D RIL     : Request not supported. Tech: 0
07-12 01:10:34.038  1474  1534 D RilRequest: [3681]< RIL_REQUEST_SIM_OPEN_CHANNEL error: com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED ret=
07-12 01:10:34.039  1474  1474 D PhoneProxy: [PhoneProxy] EVENT_REQUEST_VOICE_RADIO_TECH_DONE: newVoiceTech=1
07-12 01:10:34.039  1474  1474 D PhoneProxy: [PhoneProxy] phoneObjectUpdater: newVoiceRadioTech=1
07-12 01:10:34.039  1474  1474 D PhoneProxy: [PhoneProxy] phoneObjectUpdater: No change ignore, newVoiceRadioTech=1 mActivePhone=GSM
07-12 01:10:34.039  1474  1474 D RIL_ImsSms: IMS is NOT registered!
07-12 01:10:34.039  1474  1474 D CdmaSSM : CDMA_SUBSCRIPTION_SOURCE event = 2
07-12 01:10:34.039  1474  1474 W CdmaSSM : Unable to get CDMA Subscription Source, Exception: com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED, result: null
07-12 01:10:34.039  1474  1474 D UiccController: Received EVENT_GET_ICC_STATUS_DONE
07-12 01:10:34.039  1474  1474 D UiccCard: 2 applications
07-12 01:10:34.039  1474  1474 D UiccCardApplication: APPTYPE_SIM update. New {APPTYPE_SIM,APPSTATE_READY}
07-12 01:10:34.039  1474  1474 D UiccCardApplication: APPTYPE_RUIM update. New {APPTYPE_RUIM,APPSTATE_READY}
07-12 01:10:34.039  1474  1474 D UiccCard: Before privilege rules: Handler (com.android.internal.telephony.uicc.UiccCarrierPrivilegeRules) {cc418ec} : CARDSTATE_PRESENT
07-12 01:10:34.039  1474  1474 E UiccCard: App index 8 is invalid since there are no applications
07-12 01:10:34.039  1474  1474 D UiccCard: update: radioState=RADIO_ON mLastRadioState=RADIO_ON
07-12 01:10:34.039  1474  1474 D UiccController: Notifying IccChangedRegistrants
07-12 01:10:34.040  1474  1474 D GsmSST  : [GsmSST] SubscriptionListener.onSubscriptionInfoChanged
07-12 01:10:34.040  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.040  1474  1474 D DCT     : [0]SubscriptionListener.onSubscriptionInfoChanged
07-12 01:10:34.040  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.040  1474  1474 D SubscriptionController: [getActiveSubInfoList]+
07-12 01:10:34.040  1474  1474 D SubscriptionController: [getActiveSubInfoList] Sub Controller not ready
07-12 01:10:34.040  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.040  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.041  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:34.044  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.044  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.045  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.060  1474  1509 D SubscriptionController: [getPhoneId]- no sims, returning default phoneId=2147483647
07-12 01:10:34.062  1474  1474 E PhoneBase: Error! registerForCallWaiting() in PhoneBase should not be called, CDMAPhone inactive.
07-12 01:10:34.067  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.067  1474  1474 D DCT     : [0]handleMessage msg={ when=-46ms what=270352 obj=android.os.AsyncResult@fd2e731 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.067  1474  1474 D DCT     : [0]onDataConnectionAttached
07-12 01:10:34.067  1474  1474 D DCT     : [0]overall state is IDLE
07-12 01:10:34.067  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.067  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - SIM not loaded
07-12 01:10:34.068  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:34.068  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.068  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - SIM not loaded
07-12 01:10:34.068  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:34.069  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.069  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - SIM not loaded
07-12 01:10:34.069  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:34.069  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.069  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - SIM not loaded
07-12 01:10:34.070  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:34.070  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.070  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - SIM not loaded
07-12 01:10:34.070  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:34.071  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.071  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - SIM not loaded
07-12 01:10:34.071  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:34.071  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.071  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:34.072  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.072  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - SIM not loaded
07-12 01:10:34.072  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:34.072  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.072  1474  1474 D DCT     : [0]isDataAllowed: not allowed due to - SIM not loaded
07-12 01:10:34.072  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:34.073  1474  1474 D DCT     : [0]setupDataOnConnectableApns: dataAttached
07-12 01:10:34.073  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.073  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.073  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.073  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.073  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.073  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.073  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.073  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.073  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.073  1474  1474 D DctController: EVENT_PHONE1_DATA_ATTACH.
07-12 01:10:34.073  1474  1544 D DcSwitchSM: [DcSwitchStateMachine-0] AttachingState: EVENT_DATA_ATTACHED
07-12 01:10:34.073  1474  1544 D DcSwitchSM: [DcSwitchStateMachine-0] AttachedState: enter
07-12 01:10:34.073  1474  1544 D DctController: executeAllRequests, phone:0
07-12 01:10:34.073  1474  1474 D DCT     : [0]handleMessage msg={ when=-52ms what=270377 obj=android.os.AsyncResult@238e16 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.073  1474  1474 D DCT     : [0]setupDataOnConnectableApns: nwTypeChanged
07-12 01:10:34.073  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.073  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.074  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.074  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.074  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.074  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.074  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.074  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.074  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.074  1474  1474 D SIMRecords: [SIMRecords] fetchSimRecords 0
07-12 01:10:34.074  1474  1474 D RILJ    : [3682]> getIMSI: GET_IMSI aid: null [SUB0]
07-12 01:10:34.074   945  1043 D RIL     : onRequest: GET_IMSI
07-12 01:10:34.074   945  1043 D AT      : AT> AT+CIMI
07-12 01:10:34.074   945  1045 D AT      : AT< 310260000000000
07-12 01:10:34.074   945  1045 D AT      : AT< OK
07-12 01:10:34.074  1474  1534 D RILJ    : [3682]< GET_IMSI  [SUB0]
07-12 01:10:34.075  1474  1474 D RILJ    : [3683]> iccIO: SIM_IO 0xc0 0x2fe2  path: 3F00,0,0,15 aid: null [SUB0]
07-12 01:10:34.075   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.075   945  1043 D AT      : AT> AT+CRSM=192,12258,0,0,15
07-12 01:10:34.075   945  1045 D AT      : AT< +CRSM: 144,0,0000000a2fe204000fa0aa01020000
07-12 01:10:34.075   945  1045 D AT      : AT< OK
07-12 01:10:34.076  1474  1534 D RILJ    : [3683]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.076  1474  1474 D RILJ    : [3684]> iccIO: SIM_IO 0xc0 0x6f40  path: 3F007F10,0,0,15 aid: null [SUB0]
07-12 01:10:34.076   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.076   945  1043 D AT      : AT> AT+CRSM=192,28480,0,0,15
07-12 01:10:34.076   945  1045 D AT      : AT< +CRSM: 144,0,000000806f40040011a0aa01020120
07-12 01:10:34.076   945  1045 D AT      : AT< OK
07-12 01:10:34.076  1474  1534 D RILJ    : [3684]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.077  1474  1474 D RILJ    : [3685]> iccIO: SIM_IO 0xc0 0x6fc9  path: 3F007F20,0,0,15 aid: null [SUB0]
07-12 01:10:34.077   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.077   945  1043 D AT      : AT> AT+CRSM=192,28617,0,0,15
07-12 01:10:34.077   945  1045 D AT      : AT< +CRSM: 144,0,000000086fc9040011a0aa01020104
07-12 01:10:34.077   945  1045 D AT      : AT< OK
07-12 01:10:34.077  1474  1534 D RILJ    : [3685]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.077  1474  1474 D RILJ    : [3686]> iccIO: SIM_IO 0xc0 0x6fad  path: 3F007F20,0,0,15 aid: null [SUB0]
07-12 01:10:34.078   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.078   945  1043 D AT      : AT> AT+CRSM=192,28589,0,0,15
07-12 01:10:34.078   945  1045 D AT      : AT< +CRSM: 144,0,000000046fad04000aa0aa01020000
07-12 01:10:34.078   945  1045 D AT      : AT< OK
07-12 01:10:34.078  1474  1534 D RILJ    : [3686]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.078  1474  1474 D RILJ    : [3687]> iccIO: SIM_IO 0xc0 0x6fca  path: 3F007F20,0,0,15 aid: null [SUB0]
07-12 01:10:34.078   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.078   945  1043 D AT      : AT> AT+CRSM=192,28618,0,0,15
07-12 01:10:34.078   945  1045 D AT      : AT< +CRSM: 144,0,0000000a6fca040011a0aa01020105
07-12 01:10:34.078   945  1045 D AT      : AT< OK
07-12 01:10:34.078  1474  1534 D RILJ    : [3687]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.078  1474  1474 D RILJ    : [3688]> iccIO: SIM_IO 0xc0 0x6f11  path: 3F007F20,0,0,15 aid: null [SUB0]
07-12 01:10:34.079   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.079   945  1043 D AT      : AT> AT+CRSM=192,28433,0,0,15
07-12 01:10:34.079   945  1045 D AT      : AT< +CRSM: 144,0,000000016f11040011a0aa01020000
07-12 01:10:34.079   945  1045 D AT      : AT< OK
07-12 01:10:34.079  1474  1534 D RILJ    : [3688]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.079  1474  1474 D RILJ    : [3689]> iccIO: SIM_IO 0xc0 0x6fcb  path: 3F007F20,0,0,15 aid: null [SUB0]
07-12 01:10:34.079   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.079   945  1043 D AT      : AT> AT+CRSM=192,28619,0,0,15
07-12 01:10:34.080   945  1045 D AT      : AT< ERROR: BAD COMMAND
07-12 01:10:34.080  1474  1534 D RilRequest: [3689]< SIM_IO error: com.android.internal.telephony.CommandException: GENERIC_FAILURE ret=
07-12 01:10:34.080  1474  1474 D RILJ    : [3690]> iccIO: SIM_IO 0xc0 0x6f13  path: 3F007F20,0,0,15 aid: null [SUB0]
07-12 01:10:34.080   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.080   945  1043 D AT      : AT> AT+CRSM=192,28435,0,0,15
07-12 01:10:34.080   945  1045 D AT      : AT< +CRSM: 144,0,000000016f13040011a0aa01020000
07-12 01:10:34.080   945  1045 D AT      : AT< OK
07-12 01:10:34.080  1474  1534 D RILJ    : [3690]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.080  1474  1474 D RILJ    : [3691]> iccIO: SIM_IO 0xc0 0x6f46  path: 3F007F20,0,0,15 aid: null [SUB0]
07-12 01:10:34.081   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.081   945  1043 D AT      : AT> AT+CRSM=192,28486,0,0,15
07-12 01:10:34.081   945  1045 D AT      : AT< +CRSM: 148,4
07-12 01:10:34.081   945  1045 D AT      : AT< OK
07-12 01:10:34.081  1474  1534 D RILJ    : [3691]< SIM_IO IccIoResponse sw1:0x94 sw2:0x4 [SUB0]
07-12 01:10:34.081  1474  1474 D RILJ    : [3692]> iccIO: SIM_IO 0xc0 0x6fcd  path: 3F007F20,0,0,15 aid: null [SUB0]
07-12 01:10:34.081   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.081   945  1043 D AT      : AT> AT+CRSM=192,28621,0,0,15
07-12 01:10:34.081   945  1045 D AT      : AT< +CRSM: 148,4
07-12 01:10:34.081   945  1045 D AT      : AT< OK
07-12 01:10:34.081  1474  1534 D RILJ    : [3692]< SIM_IO IccIoResponse sw1:0x94 sw2:0x4 [SUB0]
07-12 01:10:34.082  1474  1474 D RILJ    : [3693]> iccIO: SIM_IO 0xc0 0x6fc5  path: 3F007F20,0,0,15 aid: null [SUB0]
07-12 01:10:34.082   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.082   945  1043 D AT      : AT> AT+CRSM=192,28613,0,0,15
07-12 01:10:34.082   945  1045 D AT      : AT< +CRSM: 144,0,000000f06fc504000aa0aa01020118
07-12 01:10:34.082   945  1045 D AT      : AT< OK
07-12 01:10:34.082  1474  1534 D RILJ    : [3693]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.082  1474  1474 D RILJ    : [3694]> iccIO: SIM_IO 0xc0 0x6f38  path: 3F007F20,0,0,15 aid: null [SUB0]
07-12 01:10:34.083   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.083   945  1043 D AT      : AT> AT+CRSM=192,28472,0,0,15
07-12 01:10:34.083   945  1045 D AT      : AT< +CRSM: 144,0,0000000f6f3804001aa0aa01020000
07-12 01:10:34.083   945  1045 D AT      : AT< OK
07-12 01:10:34.083  1474  1534 D RILJ    : [3694]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.083  1474  1474 D RILJ    : [3695]> iccIO: SIM_IO 0xc0 0x6f16  path: 3F007F20,0,0,15 aid: null [SUB0]
07-12 01:10:34.083   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.083   945  1043 D AT      : AT> AT+CRSM=192,28438,0,0,15
07-12 01:10:34.083   945  1045 D AT      : AT< +CRSM: 144,0,000000026f1604001aa0aa01020000
07-12 01:10:34.083   945  1045 D AT      : AT< OK
07-12 01:10:34.083  1474  1534 D RILJ    : [3695]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.083  1474  1474 D RILJ    : [3696]> iccIO: SIM_IO 0xc0 0x6f15  path: 3F007F20,0,0,15 aid: null [SUB0]
07-12 01:10:34.084   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.084   945  1043 D AT      : AT> AT+CRSM=192,28437,0,0,15
07-12 01:10:34.084   945  1045 D AT      : AT< ERROR: BAD COMMAND
07-12 01:10:34.084  1474  1534 D RilRequest: [3696]< SIM_IO error: com.android.internal.telephony.CommandException: GENERIC_FAILURE ret=
07-12 01:10:34.084  1474  1474 D RILJ    : [3697]> iccIO: SIM_IO 0xc0 0x6f3e  path: 3F007F20,0,0,15 aid: null [SUB0]
07-12 01:10:34.084   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.084   945  1043 D AT      : AT> AT+CRSM=192,28478,0,0,15
07-12 01:10:34.084   945  1045 D AT      : AT< ERROR: BAD COMMAND
07-12 01:10:34.085  1474  1534 D RilRequest: [3697]< SIM_IO error: com.android.internal.telephony.CommandException: GENERIC_FAILURE ret=
07-12 01:10:34.085  1474  1474 D RILJ    : [3698]> iccIO: SIM_IO 0xc0 0x6f3f  path: 3F007F20,0,0,15 aid: null [SUB0]
07-12 01:10:34.085  1474  1474 D SIMRecords: [SIMRecords] fetchSimRecords 17 requested: true
07-12 01:10:34.085   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.085   945  1043 D AT      : AT> AT+CRSM=192,28479,0,0,15
07-12 01:10:34.085   945  1045 D AT      : AT< ERROR: BAD COMMAND
07-12 01:10:34.085  1474  1534 D RilRequest: [3698]< SIM_IO error: com.android.internal.telephony.CommandException: GENERIC_FAILURE ret=
07-12 01:10:34.086  1474  1474 D UiccCardApplication: Error in querying facility lock:com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED
07-12 01:10:34.086  1474  1474 D RuimRecords: [RuimRecords] fetchRuimRecords 0
07-12 01:10:34.086  1474  1474 D RILJ    : [3699]> getIMSI: GET_IMSI aid: null [SUB0]
07-12 01:10:34.087  1474  1474 D RILJ    : [3700]> iccIO: SIM_IO 0xc0 0x2fe2  path: 3F00,0,0,15 aid: null [SUB0]
07-12 01:10:34.087   945  1043 D RIL     : onRequest: GET_IMSI
07-12 01:10:34.087   945  1043 D AT      : AT> AT+CIMI
07-12 01:10:34.087   945  1045 D AT      : AT< 310260000000000
07-12 01:10:34.087   945  1045 D AT      : AT< OK
07-12 01:10:34.087  1474  1534 D RILJ    : [3699]< GET_IMSI  [SUB0]
07-12 01:10:34.087  1474  1474 D RILJ    : [3701]> iccIO: SIM_IO 0xc0 0x2f05  path: 3F00,0,0,15 aid: null [SUB0]
07-12 01:10:34.088   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.088   945  1043 D AT      : AT> AT+CRSM=192,12258,0,0,15
07-12 01:10:34.088   945  1045 D AT      : AT< +CRSM: 144,0,0000000a2fe204000fa0aa01020000
07-12 01:10:34.088   945  1045 D AT      : AT< OK
07-12 01:10:34.088  1474  1474 D RILJ    : [3702]> iccIO: SIM_IO 0xc0 0x6f3a  path: 3F007F25,0,0,15 aid: null [SUB0]
07-12 01:10:34.088   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.088   945  1043 D AT      : AT> AT+CRSM=192,12037,0,0,15
07-12 01:10:34.088   945  1045 D AT      : AT< ERROR: BAD COMMAND
07-12 01:10:34.088  1474  1474 D RILJ    : [3703]> iccIO: SIM_IO 0xc0 0x6f41  path: 3F007F25,0,0,15 aid: null [SUB0]
07-12 01:10:34.089   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.089   945  1043 D AT      : AT> AT+CRSM=192,28474,0,0,15
07-12 01:10:34.089   945  1045 D AT      : AT< ERROR: BAD COMMAND
07-12 01:10:34.089  1474  1474 D RILJ    : [3704]> iccIO: SIM_IO 0xc0 0x6f44  path: 3F007F25,0,0,15 aid: null [SUB0]
07-12 01:10:34.089   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.089   945  1043 D AT      : AT> AT+CRSM=192,28481,0,0,15
07-12 01:10:34.089   945  1045 D AT      : AT< ERROR: BAD COMMAND
07-12 01:10:34.089  1474  1474 D RILJ    : [3705]> iccIO: SIM_IO 0xc0 0x6f22  path: 3F007F25,0,0,15 aid: null [SUB0]
07-12 01:10:34.089   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.090   945  1043 D AT      : AT> AT+CRSM=192,28484,0,0,15
07-12 01:10:34.090   945  1045 D AT      : AT< ERROR: BAD COMMAND
07-12 01:10:34.090  1474  1474 D RILJ    : [3706]> iccIO: SIM_IO 0xc0 0x6f28  path: 3F007F25,0,0,15 aid: null [SUB0]
07-12 01:10:34.090   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.090   945  1043 D AT      : AT> AT+CRSM=192,28450,0,0,15
07-12 01:10:34.090   945  1045 D AT      : AT< ERROR: BAD COMMAND
07-12 01:10:34.090  1474  1474 D RILJ    : [3707]> iccIO: SIM_IO 0xb0 0x6f5a  path: 3F007F25,0,0,4 aid: null [SUB0]
07-12 01:10:34.090   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.090   945  1043 D AT      : AT> AT+CRSM=192,28456,0,0,15
07-12 01:10:34.091   945  1045 D AT      : AT< ERROR: BAD COMMAND
07-12 01:10:34.091  1474  1474 D RILJ    : [3708]> iccIO: SIM_IO 0xc0 0x6f4d  path: 3F007F25,0,0,15 aid: null [SUB0]
07-12 01:10:34.091   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.091   945  1043 D AT      : AT> AT+CRSM=176,28506,0,0,4
07-12 01:10:34.091   945  1045 D AT      : AT< ERROR: BAD COMMAND
07-12 01:10:34.091  1474  1474 D RuimRecords: [RuimRecords] fetchRuimRecords 10 requested: true
07-12 01:10:34.091  1474  1474 D RILJ    : [3709]> RIL_REQUEST_CDMA_SUBSCRIPTION [SUB0]
07-12 01:10:34.091   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.091   945  1043 D AT      : AT> AT+CRSM=192,28493,0,0,15
07-12 01:10:34.091   945  1045 D AT      : AT< ERROR: BAD COMMAND
07-12 01:10:34.092  1474  1474 D UiccCardApplication: Error in querying facility lock:com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED
07-12 01:10:34.092  1474  1474 D UiccCardApplication: Error in querying facility lock:com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED
07-12 01:10:34.092  1474  1474 D UiccCardApplication: Error in querying facility lock:com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED
07-12 01:10:34.092  1474  1474 D CAT     : CatService: handleMessage[8]
07-12 01:10:34.092  1474  1474 D CAT     : CatService: MSG_ID_ICC_CHANGED
07-12 01:10:34.092  1474  1474 D CAT     : CatService: New Card State = CARDSTATE_PRESENT Old Card State = CARDSTATE_ABSENT
07-12 01:10:34.092  1474  1474 D RILJ    : [3710]> RIL_REQUEST_REPORT_STK_SERVICE_IS_RUNNING [SUB0]
07-12 01:10:34.092   945  1043 D RIL     : onRequest: CDMA_SUBSCRIPTION
07-12 01:10:34.092   945  1043 D RIL     : Request not supported. Tech: 0
07-12 01:10:34.092  1474  1474 D GSMPhone: [GSMPhone] New Uicc application found
07-12 01:10:34.092  1474  1474 D GsmSST  : [GsmSST] New card found
07-12 01:10:34.092  1474  1474 D UiccCardApplication: Notifying 1 registrant: READY
07-12 01:10:34.092  1474  1474 D DCT     : [0]handleMessage msg={ when=-54ms what=270369 obj=android.os.AsyncResult@f726397 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.092  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.092  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.092  1474  1474 D GsmSMSDispatcher: GsmSMSDispatcher: subId = -2 slotId = 0
07-12 01:10:34.092  1474  1474 D GsmSMSDispatcher: New Uicc application found
07-12 01:10:34.092  1474  1474 D IccCardProxy: Icc changed. Reregestering.
07-12 01:10:34.092  1474  1474 D UiccCardApplication: Notifying 1 registrant: READY
07-12 01:10:34.092  1474  1474 E IccCardProxy: setExternalState: set mPhoneId=0 mExternalState=READY
07-12 01:10:34.093  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.sim.state value: READY propVal=READY
07-12 01:10:34.093  1474  1534 D RILJ    : [3700]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.093  1474  1534 D RilRequest: [3701]< SIM_IO error: com.android.internal.telephony.CommandException: GENERIC_FAILURE ret=
07-12 01:10:34.093  1474  1534 D RilRequest: [3702]< SIM_IO error: com.android.internal.telephony.CommandException: GENERIC_FAILURE ret=
07-12 01:10:34.093  1474  1534 D RilRequest: [3703]< SIM_IO error: com.android.internal.telephony.CommandException: GENERIC_FAILURE ret=
07-12 01:10:34.093  1474  1534 D RilRequest: [3704]< SIM_IO error: com.android.internal.telephony.CommandException: GENERIC_FAILURE ret=
07-12 01:10:34.093  1474  1534 D RilRequest: [3705]< SIM_IO error: com.android.internal.telephony.CommandException: GENERIC_FAILURE ret=
07-12 01:10:34.093  1474  1534 D RilRequest: [3706]< SIM_IO error: com.android.internal.telephony.CommandException: GENERIC_FAILURE ret=
07-12 01:10:34.093  1474  1534 D RilRequest: [3707]< SIM_IO error: com.android.internal.telephony.CommandException: GENERIC_FAILURE ret=
07-12 01:10:34.093  1474  1534 D RilRequest: [3708]< SIM_IO error: com.android.internal.telephony.CommandException: GENERIC_FAILURE ret=
07-12 01:10:34.093  1474  1534 D RilRequest: [3709]< RIL_REQUEST_CDMA_SUBSCRIPTION error: com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED ret=
07-12 01:10:34.093   945  1043 D RIL     : onRequest: REPORT_STK_SERVICE_IS_RUNNING
07-12 01:10:34.093   945  1043 D RIL     : Request not supported. Tech: 0
07-12 01:10:34.093  1474  1534 D RilRequest: [3710]< RIL_REQUEST_REPORT_STK_SERVICE_IS_RUNNING error: com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED ret=
07-12 01:10:34.094  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.094  1474  1474 D IccCardProxy: broadcastIccStateChangedIntent intent ACTION_SIM_STATE_CHANGED value=READY reason=null for mPhoneId=0
07-12 01:10:34.095  1474  1474 D CAT     : CatService: handleMessage[8]
07-12 01:10:34.095  1474  1474 D CAT     : CatService: MSG_ID_ICC_CHANGED
07-12 01:10:34.095  1474  1474 D CAT     : CatService: New Card State = CARDSTATE_PRESENT Old Card State = CARDSTATE_PRESENT
07-12 01:10:34.095  1474  1474 D UiccCard: Error in SIM access with exceptioncom.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED
07-12 01:10:34.095  1474  1474 D DCT     : [0]handleMessage msg={ when=-55ms what=270369 obj=android.os.AsyncResult@bd69984 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.095  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.095  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.095  1474  1474 D GsmSMSDispatcher: GsmSMSDispatcher: subId = -2 slotId = 0
07-12 01:10:34.095  1474  1474 E IccCardProxy: setExternalState: !override and newstate unchanged from READY
07-12 01:10:34.095  1474  1474 D CAT     : CatService: handleMessage[8]
07-12 01:10:34.095  1474  1474 D CAT     : CatService: MSG_ID_ICC_CHANGED
07-12 01:10:34.095  1474  1474 D CAT     : CatService: New Card State = CARDSTATE_PRESENT Old Card State = CARDSTATE_PRESENT
07-12 01:10:34.095  1474  1474 D DctController: handleMessage msg={ when=-55ms what=107 target=com.android.internal.telephony.dataconnection.DctController }
07-12 01:10:34.095  1474  1474 D DctController: onSubInfoReady mPhoneNum=1
07-12 01:10:34.095  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.095  1474  1474 D DctController: onSubInfoReady handle pending requests subId=-2
07-12 01:10:34.095  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.095  1474  1474 D DctController: [TNF -2]evalPendingRequest, pending request size is 0
07-12 01:10:34.095  1474  1474 D DctController: processRequests
07-12 01:10:34.096  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.096  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:34.096  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.096  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:34.096  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.096  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:34.096  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.096  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:34.096  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.096  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:34.096  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.096  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:34.096  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.096  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:34.096  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.096  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:34.096  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.096  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=-2 isDataRoamingEnabled=true
07-12 01:10:34.096  1474  1474 D DctController: handleMessage msg={ when=-23ms what=102 target=com.android.internal.telephony.dataconnection.DctController }
07-12 01:10:34.096  1474  1474 D DctController: onExecuteAllRequests phoneId=0
07-12 01:10:34.096  1474  1474 D SIMRecords: [SIMRecords] IMSI: mMncLength=-1
07-12 01:10:34.097  1474  1474 D SIMRecords: [SIMRecords] IMSI: 310260xxxxxxx
07-12 01:10:34.097  1474  1474 D SIMRecords: [SIMRecords] onRecordLoaded 16 requested: true
07-12 01:10:34.097  1474  1474 D RILJ    : [3711]> iccIO: SIM_IO 0xb0 0x2fe2  path: 3F00,0,0,10 aid: null [SUB0]
07-12 01:10:34.097   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.097   945  1043 D AT      : AT> AT+CRSM=176,12258,0,0,10
07-12 01:10:34.097   945  1045 D AT      : AT< +CRSM: 144,0,98101430121181157002
07-12 01:10:34.097   945  1045 D AT      : AT< OK
07-12 01:10:34.097  1474  1534 D RILJ    : [3711]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.097  1474  1474 D RILJ    : [3712]> iccIO: SIM_IO 0xb2 0x6f40  path: 3F007F10,1,4,32 aid: null [SUB0]
07-12 01:10:34.098   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.098   945  1043 D AT      : AT> AT+CRSM=178,28480,1,4,32
07-12 01:10:34.098   945  1045 D AT      : AT< +CRSM: 144,0,ffffffffffffffffffffffffffffffffffff07815155255155f4ffffffffffff
07-12 01:10:34.098   945  1045 D AT      : AT< OK
07-12 01:10:34.098  1474  1534 D RILJ    : [3712]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.098  1474  1474 D RILJ    : [3713]> iccIO: SIM_IO 0xb2 0x6fc9  path: 3F007F20,1,4,4 aid: null [SUB0]
07-12 01:10:34.098   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.098   945  1043 D AT      : AT> AT+CRSM=178,28617,1,4,4
07-12 01:10:34.098   945  1045 D AT      : AT< +CRSM: 144,0,01000000
07-12 01:10:34.098   945  1045 D AT      : AT< OK
07-12 01:10:34.098  1474  1534 D RILJ    : [3713]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.099  1474  1474 D RILJ    : [3714]> iccIO: SIM_IO 0xb0 0x6fad  path: 3F007F20,0,0,4 aid: null [SUB0]
07-12 01:10:34.099   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.099   945  1043 D AT      : AT> AT+CRSM=176,28589,0,0,4
07-12 01:10:34.099   945  1045 D AT      : AT< +CRSM: 144,0,00000003
07-12 01:10:34.099   945  1045 D AT      : AT< OK
07-12 01:10:34.099  1474  1534 D RILJ    : [3714]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.099  1474  1474 D RILJ    : [3715]> iccIO: SIM_IO 0xb2 0x6fca  path: 3F007F20,1,4,5 aid: null [SUB0]
07-12 01:10:34.100   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.100   945  1043 D AT      : AT> AT+CRSM=178,28618,1,4,5
07-12 01:10:34.100   945  1045 D AT      : AT< +CRSM: 144,0,0000000000
07-12 01:10:34.100   945  1045 D AT      : AT< OK
07-12 01:10:34.100  1474  1534 D RILJ    : [3715]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.100  1474  1474 D RILJ    : [3716]> iccIO: SIM_IO 0xb0 0x6f11  path: 3F007F20,0,0,1 aid: null [SUB0]
07-12 01:10:34.100   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.100   945  1043 D AT      : AT> AT+CRSM=176,28433,0,0,1
07-12 01:10:34.100   945  1045 D AT      : AT< +CRSM: 144,0,55
07-12 01:10:34.100   945  1045 D AT      : AT< OK
07-12 01:10:34.100  1474  1534 D RILJ    : [3716]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.101  1474  1474 D RILJ    : [3717]> iccIO: SIM_IO 0xb0 0x6f13  path: 3F007F20,0,0,1 aid: null [SUB0]
07-12 01:10:34.101   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.101   945  1043 D AT      : AT> AT+CRSM=176,28435,0,0,1
07-12 01:10:34.101   945  1045 D AT      : AT< +CRSM: 144,0,55
07-12 01:10:34.101   945  1045 D AT      : AT< OK
07-12 01:10:34.101  1474  1534 D RILJ    : [3717]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.101  1474  1474 D RILJ    : [3718]> iccIO: SIM_IO 0xb2 0x6fc5  path: 3F007F20,1,4,24 aid: null [SUB0]
07-12 01:10:34.103   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.103   945  1043 D AT      : AT> AT+CRSM=178,28613,1,4,24
07-12 01:10:34.103   945  1045 D AT      : AT< +CRSM: 144,0,43058441aa890affffffffffffffffffffffffffffffffff
07-12 01:10:34.103   945  1045 D AT      : AT< OK
07-12 01:10:34.103  1474  1534 D RILJ    : [3718]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.104  1474  1474 D RILJ    : [3719]> iccIO: SIM_IO 0xb0 0x6f38  path: 3F007F20,0,0,15 aid: null [SUB0]
07-12 01:10:34.104  1474  1474 D RILJ    : [3720]> iccIO: SIM_IO 0xb0 0x6f16  path: 3F007F20,0,0,2 aid: null [SUB0]
07-12 01:10:34.105   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.105   945  1043 D AT      : AT> AT+CRSM=176,28472,0,0,15
07-12 01:10:34.105   945  1045 D AT      : AT< +CRSM: 144,0,ff30ffff3c003c03000c0000f03f00
07-12 01:10:34.105   945  1045 D AT      : AT< OK
07-12 01:10:34.105  1474  1534 D RILJ    : [3719]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.105  1474  1474 D RuimRecords: [RuimRecords] NO update mccmnc=310260
07-12 01:10:34.105  1474  1474 D RuimRecords: [RuimRecords] onRecordLoaded 9 requested: true
07-12 01:10:34.105  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.105   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.105   945  1043 D AT      : AT> AT+CRSM=176,28438,0,0,2
07-12 01:10:34.105   945  1045 D AT      : AT< +CRSM: 144,0,0233
07-12 01:10:34.105   945  1045 D AT      : AT< OK
07-12 01:10:34.106  1474  1534 D RILJ    : [3720]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.106  1474  1474 D RILJ    : [3721]> OPERATOR [SUB0]
07-12 01:10:34.106  1474  1474 D RILJ    : [3722]> DATA_REGISTRATION_STATE [SUB0]
07-12 01:10:34.106   945  1043 D RIL     : onRequest: OPERATOR
07-12 01:10:34.106   945  1043 D AT      : AT> AT+COPS=3,0;+COPS?;+COPS=3,1;+COPS?;+COPS=3,2;+COPS?
07-12 01:10:34.106   945  1045 D AT      : AT< +COPS: 0,0,"Android"
07-12 01:10:34.106   945  1045 D AT      : AT< +COPS: 0,1,"Android"
07-12 01:10:34.106   945  1045 D AT      : AT< +COPS: 0,2,"310260"
07-12 01:10:34.106   945  1045 D AT      : AT< OK
07-12 01:10:34.106  1474  1534 D RILJ    : [3721]< OPERATOR {Android, Android, 310260} [SUB0]
07-12 01:10:34.106  1474  1474 D RILJ    : [3723]> VOICE_REGISTRATION_STATE [SUB0]
07-12 01:10:34.107   945  1043 D RIL     : onRequest: DATA_REGISTRATION_STATE
07-12 01:10:34.107   945  1043 D RIL     : requestRegistrationState
07-12 01:10:34.107   945  1043 D AT      : AT> AT+CGREG?
07-12 01:10:34.107   945  1045 D AT      : AT< +CGREG: 1,1,"ffffffff","ffffffff","0003"
07-12 01:10:34.107   945  1045 D AT      : AT< OK
07-12 01:10:34.107   945  1043 D RIL     : parseRegistrationState. Parsing: +CGREG: 1,1,"ffffffff","ffffffff","0003"
07-12 01:10:34.107   945  1043 D RIL     : registration state type: 3GPP
07-12 01:10:34.107  1474  1474 D RILJ    : [3724]> QUERY_NETWORK_SELECTION_MODE [SUB0]
07-12 01:10:34.107   945  1043 D RIL     : onRequest: VOICE_REGISTRATION_STATE
07-12 01:10:34.107   945  1043 D RIL     : requestRegistrationState
07-12 01:10:34.107   945  1043 D AT      : AT> AT+CREG?
07-12 01:10:34.107   945  1045 D AT      : AT< +CREG: 2,1, "ffffffff", "ffffffff"
07-12 01:10:34.107   945  1045 D AT      : AT< OK
07-12 01:10:34.107   945  1043 D RIL     : parseRegistrationState. Parsing: +CREG: 2,1, "ffffffff", "ffffffff"
07-12 01:10:34.107   945  1043 D RIL     : registration state type: 3GPP
07-12 01:10:34.107  1474  1474 E IccCardProxy: setExternalState: !override and newstate unchanged from READY
07-12 01:10:34.107  1474  1474 D RILJ    : [3725]> iccIO: SIM_IO 0xb0 0x2fe2  path: 3F00,0,0,10 aid: null [SUB0]
07-12 01:10:34.107   945  1043 D RIL     : onRequest: QUERY_NETWORK_SELECTION_MODE
07-12 01:10:34.108   945  1043 D AT      : AT> AT+COPS?
07-12 01:10:34.108   945  1045 D AT      : AT< +COPS: 0,2,310260
07-12 01:10:34.108   945  1045 D AT      : AT< OK
07-12 01:10:34.108  1474  1474 D SubscriptionInfoUpdater: [Receiver]+
07-12 01:10:34.108  1474  1474 D SubscriptionInfoUpdater: Action: android.intent.action.SIM_STATE_CHANGED
07-12 01:10:34.108  1474  1474 D SubscriptionInfoUpdater: slotId: 0
07-12 01:10:34.108  1474  1474 D SubscriptionInfoUpdater: simStatus: READY
07-12 01:10:34.108  1474  1474 D SubscriptionInfoUpdater: Ignoring simStatus: READY
07-12 01:10:34.108  1474  1474 D SubscriptionInfoUpdater: [Receiver]-
07-12 01:10:34.108  1474  1474 D DctController: handleMessage msg={ when=-12ms what=100 target=com.android.internal.telephony.dataconnection.DctController }
07-12 01:10:34.108  1474  1474 D SubscriptionController: [getPhoneId]- no sims, returning default phoneId=2147483647
07-12 01:10:34.109  1474  1534 D RILJ    : [3722]< DATA_REGISTRATION_STATE {1, ffffffff, ffffffff, 3, null, null} [SUB0]
07-12 01:10:34.109  1474  1534 D RILJ    : [3723]< VOICE_REGISTRATION_STATE {1, ffffffff, ffffffff, 0, null, null, null, null, null, null, null, null, null, null, null} [SUB0]
07-12 01:10:34.109  1474  1534 D RILJ    : [3724]< QUERY_NETWORK_SELECTION_MODE {0} [SUB0]
07-12 01:10:34.112   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.112   945  1043 D AT      : AT> AT+CRSM=176,12258,0,0,10
07-12 01:10:34.112   945  1045 D AT      : AT< +CRSM: 144,0,98101430121181157002
07-12 01:10:34.112   945  1045 D AT      : AT< OK
07-12 01:10:34.112  1474  1534 D RILJ    : [3725]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.113  1474  1474 D DcSwitchAsyncChannel: [DcSwitchAsyncChannel-0]: rspIsIdle=false
07-12 01:10:34.113  1474  1474 D DctController: onProcessRequest requestedPhoneId=-1, activePhoneId=0
07-12 01:10:34.113  1474  1544 D DcSwitchSM: [DcSwitchStateMachine-0] AttachedState: REQ_DISCONNECT_ALL
07-12 01:10:34.113  1474  1544 D DctController: releaseAllRequests, phone:0
07-12 01:10:34.113  1474  1544 D DcSwitchSM: [DcSwitchStateMachine-0] DetachingState: enter
07-12 01:10:34.113  1474  1544 D RILJ    : [3726]> RIL_REQUEST_ALLOW_DATA allowed: false [SUB0]
07-12 01:10:34.113   945  1043 D RIL     : onRequest: ALLOW_DATA
07-12 01:10:34.113   945  1043 D RIL     : Request not supported. Tech: 0
07-12 01:10:34.113  1474  1534 D RilRequest: [3726]< RIL_REQUEST_ALLOW_DATA error: com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED ret=
07-12 01:10:34.113  1474  1544 D DcSwitchSM: [DcSwitchStateMachine-0] AttachedState: enter
07-12 01:10:34.113  1474  1544 D DctController: executeAllRequests, phone:0
07-12 01:10:34.113  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.114  1474  1474 D IccCardProxy: broadcastIccStateChangedIntent intent ACTION_SIM_STATE_CHANGED value=IMSI reason=null for mPhoneId=0
07-12 01:10:34.114  1474  1474 D SIMRecords: [SIMRecords] onRecordLoaded 15 requested: true
07-12 01:10:34.114  1474  1474 D RILJ    : [3727]> iccIO: SIM_IO 0xc0 0x6f14  path: 3F007F20,0,0,15 aid: null [SUB0]
07-12 01:10:34.115  1474  1474 D SIMRecords: [SIMRecords] onRecordLoaded 15 requested: true
07-12 01:10:34.115  1474  1474 D SIMRecords: [SIMRecords] onRecordLoaded 14 requested: true
07-12 01:10:34.116   945  1043 D RIL     : onRequest: SIM_IO
07-12 01:10:34.116   945  1043 D AT      : AT> AT+CRSM=192,28436,0,0,15
07-12 01:10:34.116   945  1045 D AT      : AT< +CRSM: 144,0,000000146f1404001aa0aa01020000
07-12 01:10:34.116   945  1045 D AT      : AT< OK
07-12 01:10:34.116  1474  1534 D RILJ    : [3727]< SIM_IO IccIoResponse sw1:0x90 sw2:0x0 [SUB0]
07-12 01:10:34.116  1474  1474 E SIMRecords: [SIMRecords] Exception in fetching EF_CSP data com.android.internal.telephony.CommandException: GENERIC_FAILURE
07-12 01:10:34.168  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:34.168  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.168  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.168  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.173  1474  1474 E PhoneBase: Error! registerForCallWaiting() in PhoneBase should not be called, CDMAPhone inactive.
07-12 01:10:34.174  1474  1474 D CAT     : CatService: handleMessage[20]
07-12 01:10:34.174  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.174  1474  1474 D GSMPhone: [GSMPhone] updateCurrentCarrierInProvider: mSubId = -2 currentDds = 1 operatorNumeric = 310260
07-12 01:10:34.174  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.174  1474  1474 D SIMRecords: [SIMRecords]  VoiceMessageCount from SIM MWIS = 0
07-12 01:10:34.174  1474  1474 D PhoneBase: Voicemail count retrieval returning 0 as count for matching subscriberId not found
07-12 01:10:34.174  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.174  1474  1474 D GSMPhone: updateVoiceMail countVoiceMessages = 0 subId -2
07-12 01:10:34.174  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.174  1474  1474 D GsmSST  : [GsmSST] EVENT_SIM_RECORDS_LOADED: what=16
07-12 01:10:34.175  1474  1474 D PhoneProxy: [PhoneProxy] updatePhoneObject: radioTechnology=0
07-12 01:10:34.175  1474  1474 D SIMRecords: [SIMRecords] getServiceProviderName: no brandOverride
07-12 01:10:34.175  1474  1474 D SIMRecords: [SIMRecords] getServiceProviderName: providerName=Android
07-12 01:10:34.175  1474  1474 D SIMRecords: [SIMRecords] getServiceProviderName: no brandOverride
07-12 01:10:34.175  1474  1474 D SIMRecords: [SIMRecords] getServiceProviderName: providerName=Android
07-12 01:10:34.175  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.175  1474  1474 D GsmSST  : [GsmSST] updateSpnDisplay: changed sending intent rule=2 showPlmn='true' plmn='Android' showSpn='false' spn='null' dataSpn='Android' subId='-2'
07-12 01:10:34.175  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.175  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.175  1474  1474 D SubscriptionController: [setPlmnSpn] No valid subscription to store info
07-12 01:10:34.175  1474  1474 D SubscriptionController: notifySubscriptionInfoChanged:
07-12 01:10:34.176  1474  1474 D IccCardProxy: operator=310260 mPhoneId=0
07-12 01:10:34.176  1474  1474 D IccCardProxy: update icc_operator_numeric=310260
07-12 01:10:34.176  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.sim.operator.numeric value: 310260 propVal=310260
07-12 01:10:34.176  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.sim.operator.iso-country value: us propVal=us
07-12 01:10:34.176  1474  1474 D IccCardProxy: Sending intent ACTION_INTERNAL_SIM_STATE_CHANGED for mPhoneId : 0
07-12 01:10:34.177  1474  1474 D DctController: handleMessage msg={ when=-14ms what=107 target=com.android.internal.telephony.dataconnection.DctController }
07-12 01:10:34.177  1474  1474 D DctController: onSubInfoReady mPhoneNum=1
07-12 01:10:34.177  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.177  1474  1474 D DctController: onSubInfoReady handle pending requests subId=-2
07-12 01:10:34.177  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.177  1474  1474 D DctController: [TNF -2]evalPendingRequest, pending request size is 0
07-12 01:10:34.177  1474  1474 D DctController: processRequests
07-12 01:10:34.177  1474  1474 D PhoneProxy: [PhoneProxy] phoneObjectUpdater: newVoiceRadioTech=0
07-12 01:10:34.177  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.177  1474  1474 D PhoneProxy: [PhoneProxy] phoneObjectUpdater: volteReplacementRat=0
07-12 01:10:34.177  1474  1474 E PhoneProxy: [PhoneProxy] phoneObjectUpdater: newVoiceRadioTech=0 doesn't match either CDMA or GSM - error! No phone change
07-12 01:10:34.177  1474  1474 D GsmSST  : [GsmSST] SubscriptionListener.onSubscriptionInfoChanged
07-12 01:10:34.177  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.178  1474  1474 D DCT     : [0]SubscriptionListener.onSubscriptionInfoChanged
07-12 01:10:34.178  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.178  1474  1474 D SubscriptionController: [getActiveSubInfoList]+
07-12 01:10:34.178  1474  1474 D SubscriptionController: [getActiveSubInfoList] Sub Controller not ready
07-12 01:10:34.178  1474  1474 E PhoneBase: Error! unregisterForCallWaiting() in PhoneBase should not be called, CDMAPhone inactive.
07-12 01:10:34.178  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.178  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.178  1474  1474 D SubscriptionController: [getPhoneId]- invalid subId return=-1
07-12 01:10:34.179  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.179  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.210  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.356  1474  1509 D SubscriptionController: [getPhoneId]- no sims, returning default phoneId=2147483647
07-12 01:10:34.362  1474  1474 E PhoneBase: Error! registerForCallWaiting() in PhoneBase should not be called, CDMAPhone inactive.
07-12 01:10:34.363  1474  1474 D SubscriptionInfoUpdater: [Receiver]+
07-12 01:10:34.363  1474  1474 D SubscriptionInfoUpdater: Action: android.intent.action.internal_sim_state_changed
07-12 01:10:34.363  1474  1474 D SubscriptionInfoUpdater: slotId: 0
07-12 01:10:34.363  1474  1474 D SubscriptionInfoUpdater: simStatus: LOADED
07-12 01:10:34.363  1474  1474 D SubscriptionInfoUpdater: [Receiver]-
07-12 01:10:34.363  1474  1474 D DctController: handleMessage msg={ when=-187ms what=100 target=com.android.internal.telephony.dataconnection.DctController }
07-12 01:10:34.363  1474  1474 D SubscriptionController: [getPhoneId]- no sims, returning default phoneId=2147483647
07-12 01:10:34.364  1474  1474 D DcSwitchAsyncChannel: [DcSwitchAsyncChannel-0]: rspIsIdle=false
07-12 01:10:34.364  1474  1474 D DctController: onProcessRequest requestedPhoneId=-1, activePhoneId=0
07-12 01:10:34.364  1474  1474 D DctController: handleMessage msg={ when=-186ms what=107 target=com.android.internal.telephony.dataconnection.DctController }
07-12 01:10:34.364  1474  1474 D DctController: onSubInfoReady mPhoneNum=1
07-12 01:10:34.364  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.364  1474  1474 D DctController: onSubInfoReady handle pending requests subId=-2
07-12 01:10:34.364  1474  1474 D SubscriptionController: [getSubId]- sSlotIdxToSubId.size == 0, return DummySubIds slotIdx=0
07-12 01:10:34.364  1474  1474 D DctController: [TNF -2]evalPendingRequest, pending request size is 0
07-12 01:10:34.364  1474  1474 D DctController: processRequests
07-12 01:10:34.364  1474  1544 D DcSwitchSM: [DcSwitchStateMachine-0] AttachedState: REQ_DISCONNECT_ALL
07-12 01:10:34.364  1474  1544 D DctController: releaseAllRequests, phone:0
07-12 01:10:34.364  1474  1544 D DcSwitchSM: [DcSwitchStateMachine-0] DetachingState: enter
07-12 01:10:34.364  1474  1544 D RILJ    : [3732]> RIL_REQUEST_ALLOW_DATA allowed: false [SUB0]
07-12 01:10:34.365   945  1043 D RIL     : onRequest: ALLOW_DATA
07-12 01:10:34.365   945  1043 D RIL     : Request not supported. Tech: 0
07-12 01:10:34.365  1474  1534 D RilRequest: [3732]< RIL_REQUEST_ALLOW_DATA error: com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED ret=
07-12 01:10:34.365  1474  1544 D DcSwitchSM: [DcSwitchStateMachine-0] AttachedState: enter
07-12 01:10:34.365  1474  1544 D DctController: executeAllRequests, phone:0
07-12 01:10:34.365  1474  1474 D SubscriptionInfoUpdater: handleSimStateLoadedInternal: slotId: 0
07-12 01:10:34.365  1474  1474 D SubscriptionInfoUpdater: All IccIds query complete
07-12 01:10:34.365  1474  1474 D SubscriptionInfoUpdater: updateSubscriptionInfoByIccId:+ Start
07-12 01:10:34.365  1474  1474 D SubscriptionController: [clearSubInfo]+
07-12 01:10:34.365  1474  1474 D SubscriptionController: [clearSubInfo]- no simInfo size=0
07-12 01:10:34.366  1474  1474 D SubscriptionInfoUpdater: insertedSimCount = 1
07-12 01:10:34.366  1474  1474 D SubscriptionController: [getSubInfoUsingSlotIdWithCheck]+ slotId:0
07-12 01:10:34.399  1474  1474 D SubscriptionController: [getPhoneId]- no sims, returning default phoneId=2147483647
07-12 01:10:34.400  1474  1474 D SubscriptionController: [getSubInfoRecord] id:1 iccid:890141032XXXXXXXXXXX simSlotIndex:0 displayName:Android nameSource:0 iconTint:-16746133 dataRoaming:0 mcc:310 mnc:260 countIso:
07-12 01:10:34.400  1474  1474 D SubscriptionController: [getPhoneId]- no sims, returning default phoneId=2147483647
07-12 01:10:34.400  1474  1474 D SubscriptionController: [getPhoneId]- no sims, returning default phoneId=2147483647
07-12 01:10:34.400  1474  1474 D SubscriptionController: [getSubInfoUsingSlotId]- null info return
07-12 01:10:34.400  1474  1474 D SubscriptionInfoUpdater: updateSubscriptionInfoByIccId: oldSubId = 1
07-12 01:10:34.400  1474  1474 D SubscriptionInfoUpdater: updateSubscriptionInfoByIccId: oldIccId[0] = 89014103211118510720, sIccId[0] = 89014103211118510720
07-12 01:10:34.400  1474  1474 D SubscriptionController: [addSubInfoRecord]+ iccId:89014103211118510720 slotId:0
07-12 01:10:34.402  1474  1474 D SubscriptionController: [getActiveSubInfoList]+
07-12 01:10:34.402  1474  1474 D SubscriptionController: [getActiveSubInfoList] Sub Controller not ready
07-12 01:10:34.402  1474  1474 D SubscriptionController: [addSubInfoRecord] Record already exists
07-12 01:10:34.403  1474  1474 D SubscriptionController: [addSubInfoRecord] sSlotIdxToSubId.size=1 slotId=0 subId=1 defaultSubId=1 simCount=1
07-12 01:10:34.403  1474  1474 D SubscriptionController: [setDefaultFallbackSubId] subId=1
07-12 01:10:34.403  1474  1474 D SubscriptionController: [setDefaultFallbackSubId] set mDefaultFallbackSubId=1
07-12 01:10:34.481  1474  1474 D SubscriptionController: [setDefaultFallbackSubId] broadcast default subId changed phoneId=0 subId=1
07-12 01:10:34.482  1474  1474 D SubscriptionController: [addSubInfoRecord] one sim set defaults to subId=1
07-12 01:10:34.482  1474  1474 D SubscriptionController: [setDefaultDataSubId] subId=1
07-12 01:10:34.482  1474  1474 D SubscriptionController: [setDefaultDataSubId] num phones=1
07-12 01:10:34.482  1474  1474 D SubscriptionController: [setDefaultDataSubId] phoneId=0 subId=1 RAF=1
07-12 01:10:34.483  1474  1474 D ProxyController: setRadioCapability: Already in requested configuration, nothing to do.
07-12 01:10:34.483  1474  1474 D SubscriptionController: [updateAllDataConnectionTrackers] sProxyPhones.length=1
07-12 01:10:34.483  1474  1474 D SubscriptionController: [updateAllDataConnectionTrackers] phoneId=0
07-12 01:10:34.483  1474  1474 D PhoneProxy: [PhoneProxy] Updating Data Connection Tracker
07-12 01:10:34.483  1474  1474 D DCT     : [0]update sub = 1
07-12 01:10:34.483  1474  1474 D DCT     : [0]update(): Active DDS, register for all events now!
07-12 01:10:34.483  1474  1474 D GsmSST  : [GsmSST] notifyDataRegStateRilRadioTechnologyChanged: drs=0 rat=3
07-12 01:10:34.483  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.network.type value: UMTS propVal=UMTS
07-12 01:10:34.483  1474  1474 D DCT     : [0]New records found.
07-12 01:10:34.483  1474  1474 D DCT     : [0]getDataEnabled: getIntWithSubId retVal=true
07-12 01:10:34.483  1474  1474 D GSMPhone: [GSMPhone] updateCurrentCarrierInProvider: mSubId = 1 currentDds = 1 operatorNumeric = 310260
07-12 01:10:34.504  1474  1474 D SubscriptionController: [broadcastDefaultDataSubIdChanged] subId=1
07-12 01:10:34.504  1474  1474 D SubscriptionController: [setDefaultSmsSubId] subId=1
07-12 01:10:34.505  1474  1474 D SubscriptionController: [broadcastDefaultSmsSubIdChanged] subId=1
07-12 01:10:34.505  1474  1474 D SubscriptionController: [setDefaultVoiceSubId] subId=1
07-12 01:10:34.505  1474  1474 D SubscriptionController: [broadcastDefaultVoiceSubIdChanged] subId=1
07-12 01:10:34.505  1474  1474 D SubscriptionController: [addSubInfoRecord] hashmap(0,1)
07-12 01:10:34.519  1474  1474 D SubscriptionController: [addSubInfoRecord] sim name = Android
07-12 01:10:34.519  1474  1474 D SubscriptionController: [updateAllDataConnectionTrackers] sProxyPhones.length=1
07-12 01:10:34.519  1474  1474 D SubscriptionController: [updateAllDataConnectionTrackers] phoneId=0
07-12 01:10:34.519  1474  1474 D PhoneProxy: [PhoneProxy] Updating Data Connection Tracker
07-12 01:10:34.519  1474  1474 D DCT     : [0]update sub = 1
07-12 01:10:34.519  1474  1474 D DCT     : [0]update(): Active DDS, register for all events now!
07-12 01:10:34.519  1474  1474 D GsmSST  : [GsmSST] notifyDataRegStateRilRadioTechnologyChanged: drs=0 rat=3
07-12 01:10:34.519  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.network.type value: UMTS propVal=UMTS
07-12 01:10:34.520  1474  1474 D DCT     : [0]getDataEnabled: getIntWithSubId retVal=true
07-12 01:10:34.520  1474  1474 D GSMPhone: [GSMPhone] updateCurrentCarrierInProvider: mSubId = 1 currentDds = 1 operatorNumeric = 310260
07-12 01:10:34.533  1474  1474 D SubscriptionController: [addSubInfoRecord]- info size=1
07-12 01:10:34.533  1474  1474 D SubscriptionInfoUpdater: newSim = false
07-12 01:10:34.533  1474  1474 D SubscriptionInfoUpdater: updateSubscriptionInfoByIccId: sInsertSimState[0] = 0
07-12 01:10:34.533  1474  1474 D SubscriptionController: [getActiveSubInfoList]+
07-12 01:10:34.533  1474  1474 D SubscriptionController: selection:sim_id>=0 null
07-12 01:10:34.534  1474  1474 D SubscriptionController: [getSubInfoRecord] id:1 iccid:890141032XXXXXXXXXXX simSlotIndex:0 displayName:Android nameSource:0 iconTint:-16746133 dataRoaming:0 mcc:310 mnc:260 countIso:us
07-12 01:10:34.536  1474  1474 D SubscriptionController: [getActiveSubInfoList]- 1 infos return
07-12 01:10:34.536  1474  1474 D SubscriptionInfoUpdater: updateSubscriptionInfoByIccId: nSubCount = 1
07-12 01:10:34.558  1474  1474 D SubscriptionController: [setDefaultDataSubId] subId=1
07-12 01:10:34.558  1474  1474 D SubscriptionController: [setDefaultDataSubId] num phones=1
07-12 01:10:34.558  1474  1474 D SubscriptionController: [setDefaultDataSubId] phoneId=0 subId=1 RAF=1
07-12 01:10:34.558  1474  1474 D ProxyController: setRadioCapability: Already in requested configuration, nothing to do.
07-12 01:10:34.558  1474  1474 D SubscriptionController: [updateAllDataConnectionTrackers] sProxyPhones.length=1
07-12 01:10:34.558  1474  1474 D SubscriptionController: [updateAllDataConnectionTrackers] phoneId=0
07-12 01:10:34.558  1474  1474 D PhoneProxy: [PhoneProxy] Updating Data Connection Tracker
07-12 01:10:34.559  1474  1474 D DCT     : [0]update sub = 1
07-12 01:10:34.559  1474  1474 D DCT     : [0]update(): Active DDS, register for all events now!
07-12 01:10:34.559  1474  1474 D GsmSST  : [GsmSST] notifyDataRegStateRilRadioTechnologyChanged: drs=0 rat=3
07-12 01:10:34.559  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.network.type value: UMTS propVal=UMTS
07-12 01:10:34.559  1474  1474 D DCT     : [0]getDataEnabled: getIntWithSubId retVal=true
07-12 01:10:34.559  1474  1474 D GSMPhone: [GSMPhone] updateCurrentCarrierInProvider: mSubId = 1 currentDds = 1 operatorNumeric = 310260
07-12 01:10:34.564  1474  1474 D SubscriptionController: [broadcastDefaultDataSubIdChanged] subId=1
07-12 01:10:34.565  1474  1474 D SubscriptionController: notifySubscriptionInfoChanged:
07-12 01:10:34.565  1474  1474 D SubscriptionInfoUpdater: updateSubscriptionInfoByIccId:- SsubscriptionInfo update complete
07-12 01:10:34.566  1474  1474 D SubscriptionController: [setMccMnc]+ mcc/mnc:310/260 subId:1
07-12 01:10:34.567  1474  1474 D SubscriptionController: notifySubscriptionInfoChanged:
07-12 01:10:34.568  1474  1474 D SubscriptionController: [getActiveSubInfoList]+
07-12 01:10:34.568  1474  1474 D SubscriptionController: selection:sim_id>=0 null
07-12 01:10:34.580  1474  1474 D SubscriptionController: [getSubInfoRecord] id:1 iccid:890141032XXXXXXXXXXX simSlotIndex:0 displayName:Android nameSource:0 iconTint:-16746133 dataRoaming:0 mcc:310 mnc:260 countIso:us
07-12 01:10:34.589  1474  1474 D SubscriptionController: [getActiveSubInfoList]- 1 infos return
07-12 01:10:34.589  1474  1474 D SubscriptionController: [getActiveSubInfoForSubscriber]+ subId=1 subInfo={id=1, iccId=890141032XXXXXXXXXXX simSlotIndex=0 displayName=Android carrierName=Android nameSource=0 iconTint=-16746133 dataRoaming=0 iconBitmap=android.graphics.Bitmap@43afea1 mcc 310 mnc 260}
07-12 01:10:34.589  1474  1474 D SubscriptionInfoUpdater: sim name = Android
07-12 01:10:34.591  1474  1474 D SubscriptionInfoUpdater: Broadcasting intent ACTION_SIM_STATE_CHANGED LOADED reason null for mCardIndex : 0
07-12 01:10:34.596  1474  1474 D DctController: handleMessage msg={ when=-232ms what=100 target=com.android.internal.telephony.dataconnection.DctController }
07-12 01:10:34.596  1474  1474 D DcSwitchAsyncChannel: [DcSwitchAsyncChannel-0]: rspIsIdle=false
07-12 01:10:34.596  1474  1474 D DctController: onProcessRequest requestedPhoneId=0, activePhoneId=0
07-12 01:10:34.596  1474  1474 D DctController: handleMessage msg={ when=-232ms what=104 target=com.android.internal.telephony.dataconnection.DctController }
07-12 01:10:34.596  1474  1474 D DctController: onReleaseAllRequests phoneId=0
07-12 01:10:34.596  1474  1474 D DctController: handleMessage msg={ when=-231ms what=102 target=com.android.internal.telephony.dataconnection.DctController }
07-12 01:10:34.596  1474  1474 D DctController: onExecuteAllRequests phoneId=0
07-12 01:10:34.596  1474  1474 E PhoneBase: Error! unregisterForCallWaiting() in PhoneBase should not be called, CDMAPhone inactive.
07-12 01:10:34.597  1474  1474 D SubscriptionController: [getActiveSubInfoList]+
07-12 01:10:34.597  1474  1474 D SubscriptionController: selection:sim_id>=0 null
07-12 01:10:34.620  1474  1474 D SubscriptionController: [getSubInfoRecord] id:1 iccid:890141032XXXXXXXXXXX simSlotIndex:0 displayName:Android nameSource:0 iconTint:-16746133 dataRoaming:0 mcc:310 mnc:260 countIso:us
07-12 01:10:34.621  1474  1474 D SubscriptionController: [getActiveSubInfoList]- 1 infos return
07-12 01:10:34.621  1474  1474 D SubscriptionController: [getActiveSubInfoForSubscriber]+ subId=1 subInfo={id=1, iccId=890141032XXXXXXXXXXX simSlotIndex=0 displayName=Android carrierName=Android nameSource=0 iconTint=-16746133 dataRoaming=0 iconBitmap=android.graphics.Bitmap@11d6087 mcc 310 mnc 260}
07-12 01:10:34.640  1474  1474 E PhoneBase: Error! registerForCallWaiting() in PhoneBase should not be called, CDMAPhone inactive.
07-12 01:10:34.720  1474  1474 D DCT     : [0]handleMessage msg={ when=-237ms what=270337 obj=android.os.AsyncResult@1657e23 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.720  1474  1474 D DCT     : [0]onRadioAvailable
07-12 01:10:34.721  1071  1519 D TelephonyRegistry: Notify data connection state changed on sub: 1
07-12 01:10:34.729  1474  1474 D DCT     : [0]overall state is IDLE
07-12 01:10:34.729  1474  1474 D DCT     : [0]handleMessage msg={ when=-246ms what=270352 obj=android.os.AsyncResult@6b78f20 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.729  1474  1474 D DCT     : [0]onDataConnectionAttached
07-12 01:10:34.729  1474  1474 D DCT     : [0]overall state is IDLE
07-12 01:10:34.776  1474  1474 D DCT     : [0]setupDataOnConnectableApns: dataAttached
07-12 01:10:34.777  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.777  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.777  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.777  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.777  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.777  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.777  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.777  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.777  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.777  1474  1474 D DCT     : [0]handleMessage msg={ when=-294ms what=270348 obj=android.os.AsyncResult@c83e0d9 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.777  1474  1474 D DCT     : [0]onRoamingOff
07-12 01:10:34.777  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.777  1474  1474 D DCT     : [0]notifyDataConnection: reason=roamingOff
07-12 01:10:34.784  1474  1474 D DCT     : [0]handleMessage msg={ when=-301ms what=270377 obj=android.os.AsyncResult@37f0a9e target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: nwTypeChanged
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.784  1474  1474 D DCT     : [0]handleMessage msg={ when=-301ms what=270377 obj=android.os.AsyncResult@687d97f target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: nwTypeChanged
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.784  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.784  1474  1474 D DCT     : [0]handleMessage msg={ when=-302ms what=270338 obj=android.os.AsyncResult@3567d4c target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.784  1474  1474 D DCT     : [0]onRecordsLoaded: createAllApnList
07-12 01:10:34.785  1474  1474 D DCT     : [0]createAllApnList: selection=numeric = '310260'
07-12 01:10:34.786  1474  1474 D DCT     : [0]createApnList: X result=[[ApnSettingV3] T-Mobile US, 1, 310260, epc.tmobile.com, , http://mms.msg.eng.t-mobile.com/mms/wapenc, , , , -1, *, IP, IP, true, 0, 0, 0, false, 0, 0, 0, 0, , ]
07-12 01:10:34.796  1474  1474 D DCT     : [0]getPreferredApn: mRequestedApnType=default cursor=android.content.ContentResolver$CursorWrapperInner@ac8b195 cursor.count=1
07-12 01:10:34.796  1474  1474 D DCT     : [0]getPreferredApn: apnSetting=[ApnSettingV3] T-Mobile US, 1, 310260, epc.tmobile.com, , http://mms.msg.eng.t-mobile.com/mms/wapenc, , , , -1, *, IP, IP, true, 0, 0, 0, false, 0, 0, 0, 0, , 
07-12 01:10:34.796  1474  1474 D DCT     : [0]getPreferredApn: X found apnSetting[ApnSettingV3] T-Mobile US, 1, 310260, epc.tmobile.com, , http://mms.msg.eng.t-mobile.com/mms/wapenc, , , , -1, *, IP, IP, true, 0, 0, 0, false, 0, 0, 0, 0, , 
07-12 01:10:34.796  1474  1474 D DCT     : [0]createAllApnList: mPreferredApn=[ApnSettingV3] T-Mobile US, 1, 310260, epc.tmobile.com, , http://mms.msg.eng.t-mobile.com/mms/wapenc, , , , -1, *, IP, IP, true, 0, 0, 0, false, 0, 0, 0, 0, , 
07-12 01:10:34.796  1474  1474 D DCT     : [0]createAllApnList: X mAllApnSettings=[[ApnSettingV3] T-Mobile US, 1, 310260, epc.tmobile.com, , http://mms.msg.eng.t-mobile.com/mms/wapenc, , , , -1, *, IP, IP, true, 0, 0, 0, false, 0, 0, 0, 0, , ]
07-12 01:10:34.796  1474  1474 D DCT     : [0]setDataProfilesAsNeeded
07-12 01:10:34.797  1474  1474 D DCT     : [0]setInitialApn: E mPreferredApn=[ApnSettingV3] T-Mobile US, 1, 310260, epc.tmobile.com, , http://mms.msg.eng.t-mobile.com/mms/wapenc, , , , -1, *, IP, IP, true, 0, 0, 0, false, 0, 0, 0, 0, , 
07-12 01:10:34.797  1474  1474 D DCT     : [0]setInitialApn: firstApnSetting=[ApnSettingV3] T-Mobile US, 1, 310260, epc.tmobile.com, , http://mms.msg.eng.t-mobile.com/mms/wapenc, , , , -1, *, IP, IP, true, 0, 0, 0, false, 0, 0, 0, 0, , 
07-12 01:10:34.797  1474  1474 D DCT     : [0]setInitialApn: defaultApnSetting=[ApnSettingV3] T-Mobile US, 1, 310260, epc.tmobile.com, , http://mms.msg.eng.t-mobile.com/mms/wapenc, , , , -1, *, IP, IP, true, 0, 0, 0, false, 0, 0, 0, 0, , 
07-12 01:10:34.797  1474  1474 D DCT     : [0]setInitialAttachApn: using mPreferredApn
07-12 01:10:34.797  1474  1474 D DCT     : [0]setInitialAttachApn: X selected Apn=[ApnSettingV3] T-Mobile US, 1, 310260, epc.tmobile.com, , http://mms.msg.eng.t-mobile.com/mms/wapenc, , , , -1, *, IP, IP, true, 0, 0, 0, false, 0, 0, 0, 0, , 
07-12 01:10:34.797  1474  1474 D RILJ    : Set RIL_REQUEST_SET_INITIAL_ATTACH_APN [SUB0]
07-12 01:10:34.797  1474  1474 D RILJ    : [3733]> RIL_REQUEST_SET_INITIAL_ATTACH_APN, apn:epc.tmobile.com, protocol:IP, authType:-1, username:none, password:none [SUB0]
07-12 01:10:34.797  1474  1474 D DCT     : [0]onRecordsLoaded: notifying data availability
07-12 01:10:34.797   945  1043 D RIL     : onRequest: RIL_REQUEST_SET_INITIAL_ATTACH_APN
07-12 01:10:34.797   945  1043 D RIL     : Request not supported. Tech: 0
07-12 01:10:34.797  1474  1534 D RilRequest: [3733]< RIL_REQUEST_SET_INITIAL_ATTACH_APN error: com.android.internal.telephony.CommandException: REQUEST_NOT_SUPPORTED ret=
07-12 01:10:34.804  1474  1474 D DCT     : [0]setupDataOnConnectableApns: simLoaded
07-12 01:10:34.804  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.804  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.804  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.804  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.804  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.804  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.804  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.804  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.804  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.805  1474  1474 D DCT     : [0]handleMessage msg={ when=-285ms what=270337 obj=android.os.AsyncResult@bcd32aa target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.805  1474  1474 D DCT     : [0]onRadioAvailable
07-12 01:10:34.814  1474  1474 D DCT     : [0]overall state is IDLE
07-12 01:10:34.814  1474  1474 D DCT     : [0]handleMessage msg={ when=-294ms what=270352 obj=android.os.AsyncResult@54a8e9b target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.814  1474  1474 D DCT     : [0]onDataConnectionAttached
07-12 01:10:34.814  1474  1474 D DCT     : [0]overall state is IDLE
07-12 01:10:34.817  1474  1474 D DCT     : [0]setupDataOnConnectableApns: dataAttached
07-12 01:10:34.817  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.817  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.817  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.817  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.817  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.817  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.817  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.817  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.817  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.817  1474  1474 D DCT     : [0]handleMessage msg={ when=-298ms what=270348 obj=android.os.AsyncResult@f142238 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.817  1474  1474 D DCT     : [0]onRoamingOff
07-12 01:10:34.817  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.817  1474  1474 D DCT     : [0]notifyDataConnection: reason=roamingOff
07-12 01:10:34.821  1474  1474 D DCT     : [0]handleMessage msg={ when=-302ms what=270377 obj=android.os.AsyncResult@d4fd211 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.821  1474  1474 D DCT     : [0]setupDataOnConnectableApns: nwTypeChanged
07-12 01:10:34.821  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.821  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.821  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]handleMessage msg={ when=-302ms what=270377 obj=android.os.AsyncResult@723cf76 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: nwTypeChanged
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]handleMessage msg={ when=-302ms what=270377 obj=android.os.AsyncResult@eb97977 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: nwTypeChanged
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.822  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.826  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.826  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.826  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.826  1474  1474 D DCT     : [0]handleMessage msg={ when=-267ms what=270337 obj=android.os.AsyncResult@10529e4 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.826  1474  1474 D DCT     : [0]onRadioAvailable
07-12 01:10:34.828  1474  1474 D DCT     : [0]overall state is IDLE
07-12 01:10:34.828  1474  1474 D DCT     : [0]handleMessage msg={ when=-270ms what=270352 obj=android.os.AsyncResult@c4e7e4d target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.828  1474  1474 D DCT     : [0]onDataConnectionAttached
07-12 01:10:34.828  1474  1474 D DCT     : [0]overall state is IDLE
07-12 01:10:34.839  1474  1474 D DCT     : [0]setupDataOnConnectableApns: dataAttached
07-12 01:10:34.839  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.839  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.839  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.839  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.839  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.839  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.839  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.839  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.839  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.839  1474  1474 D DCT     : [0]handleMessage msg={ when=-280ms what=270348 obj=android.os.AsyncResult@4756d02 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.839  1474  1474 D DCT     : [0]onRoamingOff
07-12 01:10:34.839  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.839  1474  1474 D DCT     : [0]notifyDataConnection: reason=roamingOff
07-12 01:10:34.845  1474  1474 D DCT     : [0]handleMessage msg={ when=-286ms what=270377 obj=android.os.AsyncResult@ec23613 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.845  1474  1474 D DCT     : [0]setupDataOnConnectableApns: nwTypeChanged
07-12 01:10:34.845  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.845  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.845  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.845  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.845  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.845  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.845  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.845  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.845  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]handleMessage msg={ when=-287ms what=270377 obj=android.os.AsyncResult@add0050 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: nwTypeChanged
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]handleMessage msg={ when=-287ms what=270377 obj=android.os.AsyncResult@411b249 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: nwTypeChanged
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]handleMessage msg={ when=-287ms what=270377 obj=android.os.AsyncResult@d51574e target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: nwTypeChanged
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=hipri mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=mms mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=supl mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ia mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=fota mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=ims mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=cbs mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=default mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D DCT     : [0]setupDataOnConnectableApns: apnContext {mApnType=emergency mState=IDLE mWaitingApns={null} mWaitingApnsPermanentFailureCountDown=0 mApnSetting={null} mReason=radioTurnedOff mDataEnabled=false mDependencyMet=true}
07-12 01:10:34.846  1474  1474 D GsmSST  : [GsmSST] SubscriptionListener.onSubscriptionInfoChanged
07-12 01:10:34.847  1474  1474 D PhoneFactory: calculatePreferredNetworkType: phoneSubId = 1 networkType = 0
07-12 01:10:34.847  1474  1474 D PhoneBase: setPreferredNetworkType: Abort, unknown RAF: 1 101902
07-12 01:10:34.848  1474  1474 D PhoneBase: setNetworkSelectionModeAutomatic, querying current mode
07-12 01:10:34.848  1474  1474 D RILJ    : [3734]> QUERY_NETWORK_SELECTION_MODE [SUB0]
07-12 01:10:34.848   945  1043 D RIL     : onRequest: QUERY_NETWORK_SELECTION_MODE
07-12 01:10:34.848   945  1043 D AT      : AT> AT+COPS?
07-12 01:10:34.848   945  1045 D AT      : AT< +COPS: 0,2,310260
07-12 01:10:34.848   945  1045 D AT      : AT< OK
07-12 01:10:34.848  1474  1534 D RILJ    : [3734]< QUERY_NETWORK_SELECTION_MODE {0} [SUB0]
07-12 01:10:34.848  1474  1474 D DCT     : [0]getDataEnabled: getIntWithSubId retVal=true
07-12 01:10:34.848  1474  1474 D DCT     : [0]setDataEnabled: sendMessage: enable=true
07-12 01:10:34.848  1474  1474 D TelephonyManager: setTelephonyProperty: success phoneId=0 property=gsm.network.type value: UMTS propVal=UMTS
07-12 01:10:34.849  1474  1474 D SubscriptionController: [setCarrierText]+ text:Android subId:1
07-12 01:10:34.851  1474  1474 D SubscriptionController: notifySubscriptionInfoChanged:
07-12 01:10:34.852  1474  1474 D SIMRecords: [SIMRecords] getServiceProviderName: no brandOverride
07-12 01:10:34.852  1474  1474 D SIMRecords: [SIMRecords] getServiceProviderName: providerName=Android
07-12 01:10:34.852  1474  1474 D SIMRecords: [SIMRecords] getServiceProviderName: no brandOverride
07-12 01:10:34.852  1474  1474 D SIMRecords: [SIMRecords] getServiceProviderName: providerName=Android
07-12 01:10:34.852  1474  1474 D GsmSST  : [GsmSST] updateSpnDisplay: changed sending intent rule=2 showPlmn='true' plmn='Android' showSpn='false' spn='null' dataSpn='Android' subId='1'
07-12 01:10:34.852  1474  1474 D SubscriptionController: [setCarrierText]+ text:Android subId:1
07-12 01:10:34.857  1474  1474 D SubscriptionController: notifySubscriptionInfoChanged:
07-12 01:10:34.858  1474  1474 D DCT     : [0]SubscriptionListener.onSubscriptionInfoChanged
07-12 01:10:34.859  1474  1474 D SubscriptionController: [getActiveSubInfoList]+
07-12 01:10:34.859  1474  1474 D SubscriptionController: selection:sim_id>=0 null
07-12 01:10:34.861  1474  1474 D SubscriptionController: [getSubInfoRecord] id:1 iccid:890141032XXXXXXXXXXX simSlotIndex:0 displayName:Android nameSource:0 iconTint:-16746133 dataRoaming:0 mcc:310 mnc:260 countIso:us
07-12 01:10:34.861  1474  1474 D SubscriptionController: [getActiveSubInfoList]- 1 infos return
07-12 01:10:34.862  1474  1474 E PhoneBase: Error! unregisterForCallWaiting() in PhoneBase should not be called, CDMAPhone inactive.
07-12 01:10:34.863  1474  1474 D SubscriptionController: [getActiveSubInfoList]+
07-12 01:10:34.863  1474  1474 D SubscriptionController: selection:sim_id>=0 null
07-12 01:10:34.864  1474  1474 D SubscriptionController: [getSubInfoRecord] id:1 iccid:890141032XXXXXXXXXXX simSlotIndex:0 displayName:Android nameSource:0 iconTint:-16746133 dataRoaming:0 mcc:310 mnc:260 countIso:us
07-12 01:10:34.864  1474  1474 D SubscriptionController: [getActiveSubInfoList]- 1 infos return
07-12 01:10:34.864  1474  1474 D SubscriptionController: [getActiveSubInfoForSubscriber]+ subId=1 subInfo={id=1, iccId=890141032XXXXXXXXXXX simSlotIndex=0 displayName=Android carrierName=Android nameSource=0 iconTint=-16746133 dataRoaming=0 iconBitmap=android.graphics.Bitmap@eba2a05 mcc 310 mnc 260}
07-12 01:10:34.896  1474  1474 E PhoneBase: Error! registerForCallWaiting() in PhoneBase should not be called, CDMAPhone inactive.
07-12 01:10:34.901  1474  1474 D GsmSST  : [GsmSST] SubscriptionListener.onSubscriptionInfoChanged
07-12 01:10:34.901  1474  1474 D DCT     : [0]SubscriptionListener.onSubscriptionInfoChanged
07-12 01:10:34.901  1474  1474 D SubscriptionController: [getActiveSubInfoList]+
07-12 01:10:34.902  1474  1474 D SubscriptionController: selection:sim_id>=0 null
07-12 01:10:34.903  1474  1474 D SubscriptionController: [getSubInfoRecord] id:1 iccid:890141032XXXXXXXXXXX simSlotIndex:0 displayName:Android nameSource:0 iconTint:-16746133 dataRoaming:0 mcc:310 mnc:260 countIso:us
07-12 01:10:34.903  1474  1474 D SubscriptionController: [getActiveSubInfoList]- 1 infos return
07-12 01:10:34.903  1474  1474 E PhoneBase: Error! unregisterForCallWaiting() in PhoneBase should not be called, CDMAPhone inactive.
07-12 01:10:34.904  1474  1474 D SubscriptionController: [getActiveSubInfoList]+
07-12 01:10:34.905  1474  1474 D SubscriptionController: selection:sim_id>=0 null
07-12 01:10:34.905  1474  1474 D SubscriptionController: [getSubInfoRecord] id:1 iccid:890141032XXXXXXXXXXX simSlotIndex:0 displayName:Android nameSource:0 iconTint:-16746133 dataRoaming:0 mcc:310 mnc:260 countIso:us
07-12 01:10:34.906  1474  1474 D SubscriptionController: [getActiveSubInfoList]- 1 infos return
07-12 01:10:34.906  1474  1474 D SubscriptionController: [getActiveSubInfoForSubscriber]+ subId=1 subInfo={id=1, iccId=890141032XXXXXXXXXXX simSlotIndex=0 displayName=Android carrierName=Android nameSource=0 iconTint=-16746133 dataRoaming=0 iconBitmap=android.graphics.Bitmap@4c5ae67 mcc 310 mnc 260}
07-12 01:10:34.920  1474  1474 E PhoneBase: Error! registerForCallWaiting() in PhoneBase should not be called, CDMAPhone inactive.
07-12 01:10:34.926  1474  1474 D SubscriptionInfoUpdater: [Receiver]+
07-12 01:10:34.926  1474  1474 D SubscriptionInfoUpdater: Action: android.intent.action.SIM_STATE_CHANGED
07-12 01:10:34.926  1474  1474 D SubscriptionInfoUpdater: slotId: 0
07-12 01:10:34.926  1474  1474 D SubscriptionInfoUpdater: simStatus: LOADED
07-12 01:10:34.927  1474  1474 D SubscriptionInfoUpdater: Ignoring simStatus: LOADED
07-12 01:10:34.927  1474  1474 D SubscriptionInfoUpdater: [Receiver]-
07-12 01:10:34.959  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.959  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.959  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.959  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.959  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.959  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.960  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.960  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.960  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.960  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.960  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.960  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.960  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.960  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.960  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.961  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.961  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.961  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.961  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.961  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.961  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.961  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.961  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.961  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.962  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.965  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.965  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.966  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.966  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.966  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.966  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.966  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.966  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.966  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.966  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.967  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.967  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.967  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.967  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.967  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.967  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.968  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.968  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.968  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.968  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.968  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.968  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.968  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.968  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.968  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.969  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.969  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.969  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.969  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.969  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.973  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.973  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.973  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.973  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.973  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.973  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.973  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.974  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.974  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.974  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.974  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.974  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.974  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.974  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.974  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.974  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.975  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.975  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.975  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.975  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.976  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.976  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.976  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.976  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.976  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.976  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.976  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.976  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.979  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.979  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.979  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.979  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.979  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.980  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.980  1474  1474 D DCT     : [0]getDataOnRoamingEnabled: phoneSubId=1 isDataRoamingEnabled=true
07-12 01:10:34.980  1474  1474 D PhoneBase: setNetworkSelectionModeAutomatic - already auto, ignoring
07-12 01:10:34.981  1474  1474 D DCT     : [0]handleMessage msg={ when=-132ms what=270366 arg1=1 target=com.android.internal.telephony.dataconnection.DcTracker }
07-12 01:10:34.981  1474  1474 D DCT     : [0]CMD_SET_USER_DATA_ENABLE enabled=true
07-12 01:10:34.981  1474  1474 D GsmSST  : [GsmSST] SubscriptionListener.onSubscriptionInfoChanged
07-12 01:10:34.981  1474  1474 D DCT     : [0]SubscriptionListener.onSubscriptionInfoChanged
07-12 01:10:34.981  1474  1474 D SubscriptionController: [getActiveSubInfoList]+
07-12 01:10:34.982  1474  1474 D SubscriptionController: selection:sim_id>=0 null
07-12 01:10:34.988  1474  1474 D SubscriptionController: [getSubInfoRecord] id:1 iccid:890141032XXXXXXXXXXX simSlotIndex:0 displayName:Android nameSource:0 iconTint:-16746133 dataRoaming:0 mcc:310 mnc:260 countIso:us
07-12 01:10:34.989  1474  1474 D SubscriptionController: [getActiveSubInfoList]- 1 infos return
07-12 01:10:34.989  1474  1474 E PhoneBase: Error! unregisterForCallWaiting() in PhoneBase should not be called, CDMAPhone inactive.
07-12 01:10:34.990  1474  1474 D SubscriptionController: [getActiveSubInfoList]+
07-12 01:10:34.990  1474  1474 D SubscriptionController: selection:sim_id>=0 null
07-12 01:10:34.991  1474  1474 D SubscriptionController: [getSubInfoRecord] id:1 iccid:890141032XXXXXXXXXXX simSlotIndex:0 displayName:Android nameSource:0 iconTint:-16746133 dataRoaming:0 mcc:310 mnc:260 countIso:us
07-12 01:10:34.992  1474  1474 D SubscriptionController: [getActiveSubInfoList]- 1 infos return
07-12 01:10:34.992  1474  1474 D SubscriptionController: [getActiveSubInfoForSubscriber]+ subId=1 subInfo={id=1, iccId=890141032XXXXXXXXXXX simSlotIndex=0 displayName=Android carrierName=Android nameSource=0 iconTint=-16746133 dataRoaming=0 iconBitmap=android.graphics.Bitmap@a2ebfb9 mcc 310 mnc 260}
07-12 01:10:35.002  1474  1474 E PhoneBase: Error! registerForCallWaiting() in PhoneBase should not be called, CDMAPhone inactive.
07-12 01:10:35.004  1474  1474 D GsmSST  : [GsmSST] SubscriptionListener.onSubscriptionInfoChanged
07-12 01:10:35.004  1474  1474 D DCT     : [0]SubscriptionListener.onSubscriptionInfoChanged
07-12 01:10:35.005  1474  1474 D SubscriptionController: [getActiveSubInfoList]+
07-12 01:10:35.005  1474  1474 D SubscriptionController: selection:sim_id>=0 null
07-12 01:10:35.006  1474  1474 D SubscriptionController: [getSubInfoRecord] id:1 iccid:890141032XXXXXXXXXXX simSlotIndex:0 displayName:Android nameSource:0 iconTint:-16746133 dataRoaming:0 mcc:310 mnc:260 countIso:us
07-12 01:10:35.007  1474  1474 D SubscriptionController: [getActiveSubInfoList]- 1 infos return
07-12 01:10:35.007  1474  1474 E PhoneBase: Error! unregisterForCallWaiting() in PhoneBase should not be called, CDMAPhone inactive.
07-12 01:10:35.008  1474  1474 D SubscriptionController: [getActiveSubInfoList]+
07-12 01:10:35.008  1474  1474 D SubscriptionController: selection:sim_id>=0 null
07-12 01:10:35.014  1474  1474 D SubscriptionController: [getSubInfoRecord] id:1 iccid:890141032XXXXXXXXXXX simSlotIndex:0 displayName:Android nameSource:0 iconTint:-16746133 dataRoaming:0 mcc:310 mnc:260 countIso:us
07-12 01:10:35.014  1474  1474 D SubscriptionController: [getActiveSubInfoList]- 1 infos return
07-12 01:10:35.014  1474  1474 D SubscriptionController: [getActiveSubInfoForSubscriber]+ subId=1 subInfo={id=1, iccId=890141032XXXXXXXXXXX simSlotIndex=0 displayName=Android carrierName=Android nameSource=0 iconTint=-16746133 dataRoaming=0 iconBitmap=android.graphics.Bitmap@abb767b mcc 310 mnc 260}
07-12 01:10:35.022  1474  1474 E PhoneBase: Error! registerForCallWaiting() in PhoneBase should not be called, CDMAPhone inactive.
07-12 01:10:35.023  1474  1474 D DctController: handleMessage msg={ when=-165ms what=107 target=com.android.internal.telephony.dataconnection.DctController }
07-12 01:10:35.023  1474  1474 D DctController: onSubInfoReady mPhoneNum=1
07-12 01:10:35.023  1474  1474 D DctController: onSubInfoReady handle pending requests subId=1
07-12 01:10:35.023  1474  1474 D DctController: [TNF 1]evalPendingRequest, pending request size is 0
07-12 01:10:35.023  1474  1474 D DctController: processRequests
07-12 01:10:35.038  1474  1474 D DctController: handleMessage msg={ when=-136ms what=107 target=com.android.internal.telephony.dataconnection.DctController }
07-12 01:10:35.038  1474  1474 D DctController: onSubInfoReady mPhoneNum=1
07-12 01:10:35.038  1474  1474 D DctController: onSubInfoReady handle pending requests subId=1
07-12 01:10:35.038  1474  1474 D DctController: [TNF 1]evalPendingRequest, pending request size is 0
07-12 01:10:35.038  1474  1474 D DctController: processRequests
07-12 01:10:35.051  1474  1474 D DctController: handleMessage msg={ when=-69ms what=107 target=com.android.internal.telephony.dataconnection.DctController }
07-12 01:10:35.051  1474  1474 D DctController: onSubInfoReady mPhoneNum=1
07-12 01:10:35.051  1474  1474 D DctController: onSubInfoReady handle pending requests subId=1
07-12 01:10:35.051  1474  1474 D DctController: [TNF 1]evalPendingRequest, pending request size is 0
07-12 01:10:35.051  1474  1474 D DctController: processRequests
07-12 01:10:35.055  1474  1474 D DctController: handleMessage msg={ when=-50ms what=107 target=com.android.internal.telephony.dataconnection.DctController }
07-12 01:10:35.055  1474  1474 D DctController: onSubInfoReady mPhoneNum=1
07-12 01:10:35.055  1474  1474 D DctController: onSubInfoReady handle pending requests subId=1
07-12 01:10:35.055  1474  1474 D DctController: [TNF 1]evalPendingRequest, pending request size is 0
07-12 01:10:35.055  1474  1474 D DctController: processRequests
07-12 01:10:35.062  1474  1474 D DctController: handleMessage msg={ when=-38ms what=100 target=com.android.internal.telephony.dataconnection.DctController }
07-12 01:10:35.062  1474  1474 D DcSwitchAsyncChannel: [DcSwitchAsyncChannel-0]: rspIsIdle=false
07-12 01:10:35.062  1474  1474 D DctController: onProcessRequest requestedPhoneId=0, activePhoneId=0
07-12 01:10:35.062  1474  1474 D DctController: handleMessage msg={ when=-24ms what=100 target=com.android.internal.telephony.dataconnection.DctController }
07-12 01:10:35.062  1474  1474 D DcSwitchAsyncChannel: [DcSwitchAsyncChannel-0]: rspIsIdle=false
07-12 01:10:35.062  1474  1474 D DctController: onProcessRequest requestedPhoneId=0, activePhoneId=0
07-12 01:10:35.062  1474  1474 D PhoneProxy: mPhoneProxyReceiver: action android.telephony.action.CARRIER_CONFIG_CHANGED
07-12 01:10:35.065  1474  1474 D SubscriptionController: [getActiveSubInfoList]+
07-12 01:10:35.065  1474  1474 D SubscriptionController: selection:sim_id>=0 null
07-12 01:10:35.066  1474  1474 D SubscriptionController: [getSubInfoRecord] id:1 iccid:890141032XXXXXXXXXXX simSlotIndex:0 displayName:Android nameSource:0 iconTint:-16746133 dataRoaming:0 mcc:310 mnc:260 countIso:us
07-12 01:10:35.071  1474  1474 D SubscriptionController: [getActiveSubInfoList]- 1 infos return
07-12 01:10:35.071  1474  1474 D SmsNumberUtils: enter filterDestAddr. destAddr="122"
07-12 01:10:35.072  1474  1474 D SmsNumberUtils: destAddr is not formatted.
07-12 01:10:35.072  1474  1474 D SmsNumberUtils: leave filterDestAddr, new destAddr="122"
07-12 01:10:35.073  1474  1474 V GsmSMSDispatcher: No carrier package.
07-12 01:10:35.073  1474  1474 D GsmSMSDispatcher: sendSms:  isIms()=false mRetryCount=0 mImsRetry=0 mMessageRef=0 SS=0
07-12 01:10:35.073  1474  1474 D RILJ    : [3735]> SEND_SMS [SUB0]
07-12 01:10:35.073   945  1043 D RIL     : onRequest: SEND_SMS
07-12 01:10:35.073   945  1043 D RIL     : requestSendSMS datalen =8
07-12 01:10:35.073   945  1043 D AT      : AT> AT+CMGS=29
07-12 01:10:35.073   945  1045 D AT      : AT< > 
07-12 01:10:35.073   945  1045 D AT      : AT> 004100038121f20004140605040710000041637469766174653a64743d36^Z
07-12 01:10:35.073   945  1045 D AT      : AT< +CMGS: 0
07-12 01:10:35.073   945  1045 D AT      : AT< OK
07-12 01:10:35.074  1474  1534 D RILJ    : [3735]< SEND_SMS { mMessageRef = 1, mErrorCode = 0, mAckPdu = null} [SUB0]
07-12 01:10:35.076  1474  1474 D DctController: handleMessage msg={ when=-25ms what=100 target=com.android.internal.telephony.dataconnection.DctController }
07-12 01:10:35.076  1474  1474 D DcSwitchAsyncChannel: [DcSwitchAsyncChannel-0]: rspIsIdle=false
07-12 01:10:35.076  1474  1474 D DctController: onProcessRequest requestedPhoneId=0, activePhoneId=0
07-12 01:10:35.076  1474  1474 D DctController: handleMessage msg={ when=-21ms what=100 target=com.android.internal.telephony.dataconnection.DctController }
07-12 01:10:35.076  1474  1474 D DcSwitchAsyncChannel: [DcSwitchAsyncChannel-0]: rspIsIdle=false
07-12 01:10:35.076  1474  1474 D DctController: onProcessRequest requestedPhoneId=0, activePhoneId=0
07-12 01:10:35.076  1474  1474 D ImsManager: updateVolteFeatureValue: available = false, enabled = true, nonTTY = true
07-12 01:10:35.076  1474  1474 E ImsManager: updateImsServiceConfig: com.android.ims.ImsException: Service is unavailable, code = 106
07-12 01:10:35.081  1474  1474 D SubscriptionController: [getActiveSubInfoList]+
07-12 01:10:35.081  1474  1474 D SubscriptionController: selection:sim_id>=0 null
07-12 01:10:35.082  1474  1474 D SubscriptionController: [getSubInfoRecord] id:1 iccid:890141032XXXXXXXXXXX simSlotIndex:0 displayName:Android nameSource:0 iconTint:-16746133 dataRoaming:0 mcc:310 mnc:260 countIso:us
07-12 01:10:35.083  1474  1474 D SubscriptionController: [getActiveSubInfoList]- 1 infos return
07-12 01:10:35.083  1474  1474 D SmsNumberUtils: enter filterDestAddr. destAddr="122"
07-12 01:10:35.083  1474  1474 D SmsNumberUtils: destAddr is not formatted.
07-12 01:10:35.083  1474  1474 D SmsNumberUtils: leave filterDestAddr, new destAddr="122"
07-12 01:10:35.088  1474  1474 V GsmSMSDispatcher: No carrier package.
07-12 01:10:35.089  1474  1474 D GsmSMSDispatcher: sendSms:  isIms()=false mRetryCount=0 mImsRetry=0 mMessageRef=0 SS=0
07-12 01:10:35.089  1474  1474 D RILJ    : [3736]> SEND_SMS [SUB0]
07-12 01:10:35.089   945  1043 D RIL     : onRequest: SEND_SMS
07-12 01:10:35.089   945  1043 D RIL     : requestSendSMS datalen =8
07-12 01:10:35.089   945  1043 D AT      : AT> AT+CMGS=29
07-12 01:10:35.089   945  1045 D AT      : AT< > 
07-12 01:10:35.089   945  1045 D AT      : AT> 004100038121f20004140605040710000041637469766174653a64743d36^Z
07-12 01:10:35.089   945  1045 D AT      : AT< +CMGS: 0
07-12 01:10:35.089   945  1045 D AT      : AT< OK
07-12 01:10:35.089  1474  1534 D RILJ    : [3736]< SEND_SMS { mMessageRef = 1, mErrorCode = 0, mAckPdu = null} [SUB0]
07-12 01:10:36.819  1474  1537 D GsmCellBroadcastHandler: mWakeLock released
07-12 01:10:36.829  1474  1539 D CellBroadcastHandler: mWakeLock released
07-12 01:10:36.839  1474  1541 D CdmaServiceCategoryProgramHandler: mWakeLock released
07-12 01:10:36.869  1474  1538 D GsmInboundSmsHandler: IdleState.processMessage:5
07-12 01:10:36.869  1474  1538 D GsmInboundSmsHandler: Idle state processing message type 5
07-12 01:10:36.869  1474  1540 D CdmaInboundSmsHandler: IdleState.processMessage:5
07-12 01:10:36.869  1474  1540 D CdmaInboundSmsHandler: Idle state processing message type 5
07-12 01:10:36.873  1474  1540 D CdmaInboundSmsHandler: mWakeLock released
07-12 01:10:36.873  1474  1538 D GsmInboundSmsHandler: mWakeLock released
07-12 01:10:53.950  1474  1474 D RILJ    : [3737]> SIGNAL_STRENGTH [SUB0]
07-12 01:10:53.951   945  1043 D RIL     : onRequest: SIGNAL_STRENGTH
07-12 01:10:53.951   945  1043 D AT      : AT> AT+CSQ
07-12 01:10:53.951   945  1045 D AT      : AT< +CSQ: 7,99,85,130,90,6,4,25,9,50,68,12
07-12 01:10:53.951   945  1045 D AT      : AT< OK
07-12 01:10:53.951  1474  1534 D RILJ    : [3737]< SIGNAL_STRENGTH SignalStrength: 7 99 85 130 90 6 4 25 9 50 68 12 2147483647 gsm|lte [SUB0]
07-12 01:10:53.951  1474  1474 D DefaultPhoneNotifier: notifySignalStrength: mRegistry=com.android.internal.telephony.ITelephonyRegistry$Stub$Proxy@6874fde ss=SignalStrength: 7 99 -85 -130 -90 -6 4 25 2147483647 2147483647 68 12 2147483647 gsm|lte sender=Handler (com.android.internal.telephony.gsm.GSMPhone) {b84521d}
07-12 01:10:54.120  1474  1474 D RILJ    : [3738]> SIGNAL_STRENGTH [SUB0]
07-12 01:10:54.121   945  1043 D RIL     : onRequest: SIGNAL_STRENGTH
07-12 01:10:54.121   945  1043 D AT      : AT> AT+CSQ
07-12 01:10:54.121   945  1045 D AT      : AT< +CSQ: 7,99,85,130,90,6,4,25,9,50,68,12
07-12 01:10:54.121   945  1045 D AT      : AT< OK
07-12 01:10:54.121  1474  1534 D RILJ    : [3738]< SIGNAL_STRENGTH SignalStrength: 7 99 85 130 90 6 4 25 9 50 68 12 2147483647 gsm|lte [SUB0]
07-12 01:10:54.122  1474  1474 D DefaultPhoneNotifier: notifySignalStrength: mRegistry=com.android.internal.telephony.ITelephonyRegistry$Stub$Proxy@6874fde ss=SignalStrength: 7 99 -85 -130 -90 -6 4 25 2147483647 2147483647 68 12 2147483647 gsm|lte sender=Handler (com.android.internal.telephony.gsm.GSMPhone) {b84521d}
07-12 01:11:13.990  1474  1474 D RILJ    : [3739]> SIGNAL_STRENGTH [SUB0]
07-12 01:11:13.991   945  1043 D RIL     : onRequest: SIGNAL_STRENGTH
07-12 01:11:13.991   945  1043 D AT      : AT> AT+CSQ
07-12 01:11:13.992   945  1045 D AT      : AT< +CSQ: 7,99,85,130,90,6,4,25,9,50,68,12
07-12 01:11:13.992   945  1045 D AT      : AT< OK
07-12 01:11:13.992  1474  1534 D RILJ    : [3739]< SIGNAL_STRENGTH SignalStrength: 7 99 85 130 90 6 4 25 9 50 68 12 2147483647 gsm|lte [SUB0]
07-12 01:11:13.993  1474  1474 D DefaultPhoneNotifier: notifySignalStrength: mRegistry=com.android.internal.telephony.ITelephonyRegistry$Stub$Proxy@6874fde ss=SignalStrength: 7 99 -85 -130 -90 -6 4 25 2147483647 2147483647 68 12 2147483647 gsm|lte sender=Handler (com.android.internal.telephony.gsm.GSMPhone) {b84521d}
07-12 01:11:14.140  1474  1474 D RILJ    : [3740]> SIGNAL_STRENGTH [SUB0]
07-12 01:11:14.141   945  1043 D RIL     : onRequest: SIGNAL_STRENGTH
07-12 01:11:14.141   945  1043 D AT      : AT> AT+CSQ
07-12 01:11:14.141   945  1045 D AT      : AT< +CSQ: 7,99,85,130,90,6,4,25,9,50,68,12
07-12 01:11:14.141   945  1045 D AT      : AT< OK
07-12 01:11:14.141  1474  1534 D RILJ    : [3740]< SIGNAL_STRENGTH SignalStrength: 7 99 85 130 90 6 4 25 9 50 68 12 2147483647 gsm|lte [SUB0]
07-12 01:11:14.141  1474  1474 D DefaultPhoneNotifier: notifySignalStrength: mRegistry=com.android.internal.telephony.ITelephonyRegistry$Stub$Proxy@6874fde ss=SignalStrength: 7 99 -85 -130 -90 -6 4 25 2147483647 2147483647 68 12 2147483647 gsm|lte sender=Handler (com.android.internal.telephony.gsm.GSMPhone) {b84521d}
07-12 01:11:34.030  1474  1474 D RILJ    : [3741]> SIGNAL_STRENGTH [SUB0]
07-12 01:11:34.031   945  1043 D RIL     : onRequest: SIGNAL_STRENGTH
07-12 01:11:34.031   945  1043 D AT      : AT> AT+CSQ
07-12 01:11:34.031   945  1045 D AT      : AT< +CSQ: 7,99,85,130,90,6,4,25,9,50,68,12
07-12 01:11:34.032   945  1045 D AT      : AT< OK
07-12 01:11:34.032  1474  1534 D RILJ    : [3741]< SIGNAL_STRENGTH SignalStrength: 7 99 85 130 90 6 4 25 9 50 68 12 2147483647 gsm|lte [SUB0]
07-12 01:11:34.032  1474  1474 D DefaultPhoneNotifier: notifySignalStrength: mRegistry=com.android.internal.telephony.ITelephonyRegistry$Stub$Proxy@6874fde ss=SignalStrength: 7 99 -85 -130 -90 -6 4 25 2147483647 2147483647 68 12 2147483647 gsm|lte sender=Handler (com.android.internal.telephony.gsm.GSMPhone) {b84521d}
07-12 01:11:34.160  1474  1474 D RILJ    : [3742]> SIGNAL_STRENGTH [SUB0]
07-12 01:11:34.160   945  1043 D RIL     : onRequest: SIGNAL_STRENGTH
07-12 01:11:34.161   945  1043 D AT      : AT> AT+CSQ
07-12 01:11:34.161   945  1045 D AT      : AT< +CSQ: 7,99,85,130,90,6,4,25,9,50,68,12
07-12 01:11:34.161   945  1045 D AT      : AT< OK
07-12 01:11:34.161  1474  1534 D RILJ    : [3742]< SIGNAL_STRENGTH SignalStrength: 7 99 85 130 90 6 4 25 9 50 68 12 2147483647 gsm|lte [SUB0]
07-12 01:11:34.161  1474  1474 D DefaultPhoneNotifier: notifySignalStrength: mRegistry=com.android.internal.telephony.ITelephonyRegistry$Stub$Proxy@6874fde ss=SignalStrength: 7 99 -85 -130 -90 -6 4 25 2147483647 2147483647 68 12 2147483647 gsm|lte sender=Handler (com.android.internal.telephony.gsm.GSMPhone) {b84521d}
07-12 01:11:54.071  1474  1474 D RILJ    : [3743]> SIGNAL_STRENGTH [SUB0]
07-12 01:11:54.072   945  1043 D RIL     : onRequest: SIGNAL_STRENGTH
07-12 01:11:54.072   945  1043 D AT      : AT> AT+CSQ
07-12 01:11:54.072   945  1045 D AT      : AT< +CSQ: 7,99,85,130,90,6,4,25,9,50,68,12
07-12 01:11:54.072   945  1045 D AT      : AT< OK
07-12 01:11:54.073  1474  1534 D RILJ    : [3743]< SIGNAL_STRENGTH SignalStrength: 7 99 85 130 90 6 4 25 9 50 68 12 2147483647 gsm|lte [SUB0]
07-12 01:11:54.073  1474  1474 D DefaultPhoneNotifier: notifySignalStrength: mRegistry=com.android.internal.telephony.ITelephonyRegistry$Stub$Proxy@6874fde ss=SignalStrength: 7 99 -85 -130 -90 -6 4 25 2147483647 2147483647 68 12 2147483647 gsm|lte sender=Handler (com.android.internal.telephony.gsm.GSMPhone) {b84521d}
07-12 01:11:54.181  1474  1474 D RILJ    : [3744]> SIGNAL_STRENGTH [SUB0]
07-12 01:11:54.182   945  1043 D RIL     : onRequest: SIGNAL_STRENGTH
07-12 01:11:54.182   945  1043 D AT      : AT> AT+CSQ
07-12 01:11:54.182   945  1045 D AT      : AT< +CSQ: 7,99,85,130,90,6,4,25,9,50,68,12
07-12 01:11:54.182   945  1045 D AT      : AT< OK
07-12 01:11:54.182  1474  1534 D RILJ    : [3744]< SIGNAL_STRENGTH SignalStrength: 7 99 85 130 90 6 4 25 9 50 68 12 2147483647 gsm|lte [SUB0]
07-12 01:11:54.182  1474  1474 D DefaultPhoneNotifier: notifySignalStrength: mRegistry=com.android.internal.telephony.ITelephonyRegistry$Stub$Proxy@6874fde ss=SignalStrength: 7 99 -85 -130 -90 -6 4 25 2147483647 2147483647 68 12 2147483647 gsm|lte sender=Handler (com.android.internal.telephony.gsm.GSMPhone) {b84521d}
07-12 01:12:14.111  1474  1474 D RILJ    : [3745]> SIGNAL_STRENGTH [SUB0]
07-12 01:12:14.111   945  1043 D RIL     : onRequest: SIGNAL_STRENGTH
07-12 01:12:14.111   945  1043 D AT      : AT> AT+CSQ
07-12 01:12:14.112   945  1045 D AT      : AT< +CSQ: 7,99,85,130,90,6,4,25,9,50,68,12
07-12 01:12:14.112   945  1045 D AT      : AT< OK
07-12 01:12:14.112  1474  1534 D RILJ    : [3745]< SIGNAL_STRENGTH SignalStrength: 7 99 85 130 90 6 4 25 9 50 68 12 2147483647 gsm|lte [SUB0]
07-12 01:12:14.113  1474  1474 D DefaultPhoneNotifier: notifySignalStrength: mRegistry=com.android.internal.telephony.ITelephonyRegistry$Stub$Proxy@6874fde ss=SignalStrength: 7 99 -85 -130 -90 -6 4 25 2147483647 2147483647 68 12 2147483647 gsm|lte sender=Handler (com.android.internal.telephony.gsm.GSMPhone) {b84521d}
07-12 01:12:14.201  1474  1474 D RILJ    : [3746]> SIGNAL_STRENGTH [SUB0]
07-12 01:12:14.201   945  1043 D RIL     : onRequest: SIGNAL_STRENGTH
07-12 01:12:14.201   945  1043 D AT      : AT> AT+CSQ
07-12 01:12:14.202   945  1045 D AT      : AT< +CSQ: 7,99,85,130,90,6,4,25,9,50,68,12
07-12 01:12:14.202   945  1045 D AT      : AT< OK
07-12 01:12:14.202  1474  1534 D RILJ    : [3746]< SIGNAL_STRENGTH SignalStrength: 7 99 85 130 90 6 4 25 9 50 68 12 2147483647 gsm|lte [SUB0]
07-12 01:12:14.202  1474  1474 D DefaultPhoneNotifier: notifySignalStrength: mRegistry=com.android.internal.telephony.ITelephonyRegistry$Stub$Proxy@6874fde ss=SignalStrength: 7 99 -85 -130 -90 -6 4 25 2147483647 2147483647 68 12 2147483647 gsm|lte sender=Handler (com.android.internal.telephony.gsm.GSMPhone) {b84521d}
07-12 01:12:34.151  1474  1474 D RILJ    : [3747]> SIGNAL_STRENGTH [SUB0]
07-12 01:12:34.152   945  1043 D RIL     : onRequest: SIGNAL_STRENGTH
07-12 01:12:34.152   945  1043 D AT      : AT> AT+CSQ
07-12 01:12:34.152   945  1045 D AT      : AT< +CSQ: 7,99,85,130,90,6,4,25,9,50,68,12
07-12 01:12:34.152   945  1045 D AT      : AT< OK
07-12 01:12:34.152  1474  1534 D RILJ    : [3747]< SIGNAL_STRENGTH SignalStrength: 7 99 85 130 90 6 4 25 9 50 68 12 2147483647 gsm|lte [SUB0]
07-12 01:12:34.153  1474  1474 D DefaultPhoneNotifier: notifySignalStrength: mRegistry=com.android.internal.telephony.ITelephonyRegistry$Stub$Proxy@6874fde ss=SignalStrength: 7 99 -85 -130 -90 -6 4 25 2147483647 2147483647 68 12 2147483647 gsm|lte sender=Handler (com.android.internal.telephony.gsm.GSMPhone) {b84521d}
07-12 01:12:34.221  1474  1474 D RILJ    : [3748]> SIGNAL_STRENGTH [SUB0]
07-12 01:12:34.221   945  1043 D RIL     : onRequest: SIGNAL_STRENGTH
07-12 01:12:34.221   945  1043 D AT      : AT> AT+CSQ
07-12 01:12:34.221   945  1045 D AT      : AT< +CSQ: 7,99,85,130,90,6,4,25,9,50,68,12
07-12 01:12:34.221   945  1045 D AT      : AT< OK
07-12 01:12:34.222  1474  1534 D RILJ    : [3748]< SIGNAL_STRENGTH SignalStrength: 7 99 85 130 90 6 4 25 9 50 68 12 2147483647 gsm|lte [SUB0]
07-12 01:12:34.222  1474  1474 D DefaultPhoneNotifier: notifySignalStrength: mRegistry=com.android.internal.telephony.ITelephonyRegistry$Stub$Proxy@6874fde ss=SignalStrength: 7 99 -85 -130 -90 -6 4 25 2147483647 2147483647 68 12 2147483647 gsm|lte sender=Handler (com.android.internal.telephony.gsm.GSMPhone) {b84521d}
07-12 01:12:54.192  1474  1474 D RILJ    : [3749]> SIGNAL_STRENGTH [SUB0]
07-12 01:12:54.193   945  1043 D RIL     : onRequest: SIGNAL_STRENGTH
07-12 01:12:54.193   945  1043 D AT      : AT> AT+CSQ
07-12 01:12:54.193   945  1045 D AT      : AT< +CSQ: 7,99,85,130,90,6,4,25,9,50,68,12
07-12 01:12:54.193   945  1045 D AT      : AT< OK
07-12 01:12:54.193  1474  1534 D RILJ    : [3749]< SIGNAL_STRENGTH SignalStrength: 7 99 85 130 90 6 4 25 9 50 68 12 2147483647 gsm|lte [SUB0]
07-12 01:12:54.193  1474  1474 D DefaultPhoneNotifier: notifySignalStrength: mRegistry=com.android.internal.telephony.ITelephonyRegistry$Stub$Proxy@6874fde ss=SignalStrength: 7 99 -85 -130 -90 -6 4 25 2147483647 2147483647 68 12 2147483647 gsm|lte sender=Handler (com.android.internal.telephony.gsm.GSMPhone) {b84521d}
07-12 01:12:54.242  1474  1474 D RILJ    : [3750]> SIGNAL_STRENGTH [SUB0]
07-12 01:12:54.242   945  1043 D RIL     : onRequest: SIGNAL_STRENGTH
07-12 01:12:54.242   945  1043 D AT      : AT> AT+CSQ
07-12 01:12:54.242   945  1045 D AT      : AT< +CSQ: 7,99,85,130,90,6,4,25,9,50,68,12
07-12 01:12:54.242   945  1045 D AT      : AT< OK
07-12 01:12:54.242  1474  1534 D RILJ    : [3750]< SIGNAL_STRENGTH SignalStrength: 7 99 85 130 90 6 4 25 9 50 68 12 2147483647 gsm|lte [SUB0]
07-12 01:12:54.243  1474  1474 D DefaultPhoneNotifier: notifySignalStrength: mRegistry=com.android.internal.telephony.ITelephonyRegistry$Stub$Proxy@6874fde ss=SignalStrength: 7 99 -85 -130 -90 -6 4 25 2147483647 2147483647 68 12 2147483647 gsm|lte sender=Handler (com.android.internal.telephony.gsm.GSMPhone) {b84521d}
07-12 01:13:14.232  1474  1474 D RILJ    : [3751]> SIGNAL_STRENGTH [SUB0]
07-12 01:13:14.233   945  1043 D RIL     : onRequest: SIGNAL_STRENGTH
07-12 01:13:14.233   945  1043 D AT      : AT> AT+CSQ
07-12 01:13:14.233   945  1045 D AT      : AT< +CSQ: 7,99,85,130,90,6,4,25,9,50,68,12
07-12 01:13:14.233   945  1045 D AT      : AT< OK
07-12 01:13:14.233  1474  1534 D RILJ    : [3751]< SIGNAL_STRENGTH SignalStrength: 7 99 85 130 90 6 4 25 9 50 68 12 2147483647 gsm|lte [SUB0]
07-12 01:13:14.233  1474  1474 D DefaultPhoneNotifier: notifySignalStrength: mRegistry=com.android.internal.telephony.ITelephonyRegistry$Stub$Proxy@6874fde ss=SignalStrength: 7 99 -85 -130 -90 -6 4 25 2147483647 2147483647 68 12 2147483647 gsm|lte sender=Handler (com.android.internal.telephony.gsm.GSMPhone) {b84521d}
07-12 01:13:14.262  1474  1474 D RILJ    : [3752]> SIGNAL_STRENGTH [SUB0]
07-12 01:13:14.262   945  1043 D RIL     : onRequest: SIGNAL_STRENGTH
07-12 01:13:14.262   945  1043 D AT      : AT> AT+CSQ
07-12 01:13:14.262   945  1045 D AT      : AT< +CSQ: 7,99,85,130,90,6,4,25,9,50,68,12
07-12 01:13:14.262   945  1045 D AT      : AT< OK
07-12 01:13:14.262  1474  1534 D RILJ    : [3752]< SIGNAL_STRENGTH SignalStrength: 7 99 85 130 90 6 4 25 9 50 68 12 2147483647 gsm|lte [SUB0]
07-12 01:13:14.262  1474  1474 D DefaultPhoneNotifier: notifySignalStrength: mRegistry=com.android.internal.telephony.ITelephonyRegistry$Stub$Proxy@6874fde ss=SignalStrength: 7 99 -85 -130 -90 -6 4 25 2147483647 2147483647 68 12 2147483647 gsm|lte sender=Handler (com.android.internal.telephony.gsm.GSMPhone) {b84521d}
