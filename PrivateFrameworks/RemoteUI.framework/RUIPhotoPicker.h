/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIPhotoPicker : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    UIImagePickerController * _imagePickerController;
    UIImage * _pickedImage;
    id /* block */  _pickerCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *pickedImage;
@property (nonatomic, copy) id /* block */ pickerCompletion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissWithImage:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)pickImageWithParentController:(id)arg1 completion:(id /* block */)arg2;
- (id)pickedImage;
- (id /* block */)pickerCompletion;
- (void)setPickedImage:(id)arg1;
- (void)setPickerCompletion:(id /* block */)arg1;

@end
