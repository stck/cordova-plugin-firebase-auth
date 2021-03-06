#import <Cordova/CDV.h>
#import <GoogleSignIn/GoogleSignIn.h>

@interface FirebaseAuthPlugin : CDVPlugin

@property (atomic) NSString* currentSigninCallbackId;
@property (atomic) GIDSignIn* googleSigninInstance;

- (void)googleLogin:(CDVInvokedUrlCommand*)command;

@end
