/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactAction : NSObject {
    UIColor * _color;
    CNContact * _contact;
    <CNContactActionDelegate> * _delegate;
    bool  _destructive;
    SEL  _selector;
    id  _target;
    NSString * _title;
    long long  _transportType;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic) <CNContactActionDelegate> *delegate;
@property (getter=isDestructive, nonatomic) bool destructive;
@property (nonatomic, readonly) CNMutableContact *mutableContact;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly) id target;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic) long long transportType;

+ (id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
+ (id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(bool)arg4;

- (void).cxx_destruct;
- (id)color;
- (id)contact;
- (id)delegate;
- (id)description;
- (id)initWithContact:(id)arg1;
- (id)initWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(bool)arg4;
- (bool)isDestructive;
- (id)mutableContact;
- (void)performActionWithSender:(id)arg1;
- (SEL)selector;
- (void)setColor:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestructive:(bool)arg1;
- (void)setTransportType:(long long)arg1;
- (id)target;
- (id)title;
- (long long)transportType;

@end