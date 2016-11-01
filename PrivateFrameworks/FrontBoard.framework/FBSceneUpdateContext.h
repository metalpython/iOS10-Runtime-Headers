/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneUpdateContext : NSObject <BSDescriptionProviding> {
    NSString * _sceneID;
    FBSSceneSettingsDiff * _settingsDiff;
    unsigned long long  _transactionID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *sceneID;
@property (nonatomic, retain) FBSSceneSettingsDiff *settingsDiff;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transactionID;

+ (id)contextWithSceneID:(id)arg1 transactionID:(unsigned long long)arg2 settingsDiff:(id)arg3;

- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)sceneID;
- (void)setSceneID:(id)arg1;
- (void)setSettingsDiff:(id)arg1;
- (void)setTransactionID:(unsigned long long)arg1;
- (id)settingsDiff;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)transactionID;

@end