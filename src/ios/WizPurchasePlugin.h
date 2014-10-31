/* wizPurchasePlugin
 *
 * @author Ally Ogilvie
 * @copyright Wizcorp Inc. [ Incorporated Wizards ] 2014
 * @file wizPurchasePlugin.h
 *
 */

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>
#import <Cordova/CDVPlugin.h>

@interface WizPurchasePlugin : CDVPlugin <SKProductsRequestDelegate, SKPaymentTransactionObserver> {
    SKProductsResponse *productsResponse;
    NSString *getProductDetailsCb;
    NSString *makePurchaseCb;
    NSString *restorePurchaseCb;
}

//cranberrygame start
- (void)setUp: (CDVInvokedUrlCommand*)command;
//cranberrygame end
- (void)canMakePurchase:(CDVInvokedUrlCommand *)command;
- (void)makePurchase:(CDVInvokedUrlCommand *)command;
- (void)getProductDetail:(CDVInvokedUrlCommand *)command;
- (void)consumePurchase:(CDVInvokedUrlCommand *)command;
- (void)getPending:(CDVInvokedUrlCommand *)command;
- (void)restoreAll:(CDVInvokedUrlCommand *)command;

@end
