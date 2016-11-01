/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUState : NSObject <NSKeyedUnarchiverDelegate> {
    bool  _autodownloadNeedsOneTimeRetry;
    SUDescriptor * _currentDescriptor;
    SUDescriptor * _failedPatchDescriptor;
    _SUAutoInstallOperationModel * _lastAutoInstallOperationModel;
    SUDownload * _lastDownload;
    NSString * _lastProductBuild;
    NSString * _lastProductType;
    NSString * _lastProductVersion;
    NSString * _lastReleaseType;
    SUDescriptor * _lastScannedDescriptor;
    NSDate * _lastScannedDescriptorTime;
    bool  _manifestSubmitted;
    NSDate * _scheduledAutodownloadPolicyChangeTime;
    NSDate * _scheduledAutodownloadWifiPeriodEndTime;
    NSDate * _scheduledManualDownloadWifiPeriodEndTime;
    bool  _stashbagPersisted;
    NSDictionary * _unlockCallbacks;
}

@property (nonatomic) bool autodownloadNeedsOneTimeRetry;
@property (nonatomic, copy) SUDescriptor *currentDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) SUDescriptor *failedPatchDescriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SUAutoInstallOperationModel *lastAutoInstallOperationModel;
@property (nonatomic, copy) SUDownload *lastDownload;
@property (nonatomic, retain) NSString *lastProductBuild;
@property (nonatomic, retain) NSString *lastProductType;
@property (nonatomic, retain) NSString *lastProductVersion;
@property (nonatomic, retain) NSString *lastReleaseType;
@property (nonatomic, copy) SUDescriptor *lastScannedDescriptor;
@property (nonatomic, retain) NSDate *lastScannedDescriptorTime;
@property (nonatomic) bool manifestSubmitted;
@property (nonatomic, retain) NSDate *scheduledAutodownloadPolicyChangeTime;
@property (nonatomic, retain) NSDate *scheduledAutodownloadWifiPeriodEndTime;
@property (nonatomic, retain) NSDate *scheduledManualDownloadWifiPeriodEndTime;
@property (nonatomic) bool stashbagPersisted;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *unlockCallbacks;

+ (id)currentState;
+ (id)statePath;

- (id)_stateAsDictionary;
- (bool)autodownloadNeedsOneTimeRetry;
- (id)currentDescriptor;
- (void)dealloc;
- (id)description;
- (id)failedPatchDescriptor;
- (id)init;
- (id)lastAutoInstallOperationModel;
- (id)lastDownload;
- (id)lastProductBuild;
- (id)lastProductType;
- (id)lastProductVersion;
- (id)lastReleaseType;
- (id)lastScannedDescriptor;
- (id)lastScannedDescriptorTime;
- (void)load;
- (bool)manifestSubmitted;
- (void)resetAllHistory;
- (void)resetDownloadAndScanHistory;
- (void)save;
- (id)scheduledAutodownloadPolicyChangeTime;
- (id)scheduledAutodownloadWifiPeriodEndTime;
- (id)scheduledManualDownloadWifiPeriodEndTime;
- (void)setAutodownloadNeedsOneTimeRetry:(bool)arg1;
- (void)setCurrentDescriptor:(id)arg1;
- (void)setFailedPatchDescriptor:(id)arg1;
- (void)setLastAutoInstallOperationModel:(id)arg1;
- (void)setLastDownload:(id)arg1;
- (void)setLastProductBuild:(id)arg1;
- (void)setLastProductType:(id)arg1;
- (void)setLastProductVersion:(id)arg1;
- (void)setLastReleaseType:(id)arg1;
- (void)setLastScannedDescriptor:(id)arg1;
- (void)setLastScannedDescriptorTime:(id)arg1;
- (void)setManifestSubmitted:(bool)arg1;
- (void)setScheduledAutodownloadPolicyChangeTime:(id)arg1;
- (void)setScheduledAutodownloadWifiPeriodEndTime:(id)arg1;
- (void)setScheduledManualDownloadWifiPeriodEndTime:(id)arg1;
- (void)setStashbagPersisted:(bool)arg1;
- (void)setUnlockCallbacks:(id)arg1;
- (bool)stashbagPersisted;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (id)unlockCallbacks;

@end