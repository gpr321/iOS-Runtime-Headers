/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAccountSync : NSObject {
    int  _circleToken;
    BOOL  _duchessEnabled;
    BOOL  _enabled;
    int  _keychainToken;
    ACAccountStore * _store;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSTimer * _timer;
}

+ (id)accountSyncPropertiesForAccount:(id)arg1;
+ (id)accountSyncSupportedTypes;
+ (id)accountSyncUnsupportedTypes;
+ (id)duchessHostnames;
+ (id)sharedAccountSyncServer;

- (void).cxx_destruct;
- (void)accountChanges:(id)arg1;
- (id)accountPropertiesFromDictionary:(id)arg1 forType:(id)arg2;
- (BOOL)checkCircleState;
- (void)createAccounts:(id)arg1;
- (void)createKeychainItems:(id)arg1;
- (void)dealloc;
- (void)deleteAccounts:(id)arg1;
- (BOOL)detectDuchess;
- (void)devices;
- (void)fixLDAP;
- (void)fixSMTP;
- (id)getAccountsOfType:(id)arg1;
- (id)getiOSVersion;
- (id)init;
- (BOOL)isDataclassActionRequired:(id)arg1;
- (BOOL)isMigrated;
- (void)kvsChanges:(id)arg1;
- (id)ldapAccounts;
- (id)localAccounts;
- (id)localHostnameAccounts;
- (BOOL)locallyMigrated;
- (void)markMigrated;
- (BOOL)migrate;
- (void)postNotificationFor:(id)arg1;
- (id)primaryiCloudAccount;
- (id)processAdds;
- (id)processDeletes;
- (id)processHostnameAdds;
- (id)processHostnameDeletes;
- (void)queueSync;
- (void)registerForNotifications;
- (id)remoteAccounts;
- (id)remoteHostnameAccounts;
- (void)scheduleSync;
- (void)setiOSVersion;
- (void)setupAccountSync;
- (id)smtpAccounts;
- (BOOL)supportedType:(id)arg1;
- (void)sync;
- (BOOL)unsupportedType:(id)arg1;
- (void)waitForBuddy;

@end