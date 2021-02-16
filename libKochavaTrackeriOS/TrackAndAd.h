//
//  TrackAndAd.h
//  TrackAndAd
//
//  Copyright (c) 2013-2014 Kochava. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>



#pragma mark - INTERFACE (EventStandardParameters)



/*!
 @class EventStandardParameters
 
 @brief The definition of standardized parameters for an event.
 
 @discussion This class is used to store and pass standardized parameters when sending a post-install event to the server.  The proper use of this class is to instantiate an object using the designated initializer, and then to assign values to each property that you wish to send.  You may then pass this object as a parameter to trackEventWithEventStandardParameters.
 */
@interface EventStandardParameters : NSObject



#pragma mark - NS_ENUM
#pragma mark EventStandardParametersEnum



typedef NS_ENUM(NSUInteger, EventStandardParametersEnum)
{
    EventStandardParametersEnumUndefined = 0,
    
    /*! @brief Add to cart
     */
    EventStandardParametersEnumAddToCart,
    
    /*! @brief Add to wish list
     */
    EventStandardParametersEnumAddToWishList,
    
    /*! @brief Achievement
     */
    EventStandardParametersEnumAchievement,
    
    /*! @brief Checkout Start
     */
    EventStandardParametersEnumCheckoutStart,
    
    /*! @brief Level Complete
     */
    EventStandardParametersEnumLevelComplete,
    
    /*! @brief Purchase
     */
    EventStandardParametersEnumPurchase,
    
    /*! @brief Rating
     */
    EventStandardParametersEnumRating,
    
    /*! @brief Registration Complete
     */
    EventStandardParametersEnumRegistrationComplete,
    
    /*! @brief Search
     */
    EventStandardParametersEnumSearch,
    
    /*! @brief Tutorial Complete
     */
    EventStandardParametersEnumTutorialComplete,
    
    /*! @brief View
     */
    EventStandardParametersEnumView,
};



#pragma mark - PARAMETERS


/*!
 @brief A property indicating whether a checkout took place as a guest.
 
 @discussion This is generally taken to be a boolean, but it is passed as a string so that you can provide more than two states.  Suggested values are "true" and "false", but can also be values such as "yes" and "no".
 */
@property (strong, nonatomic) NSString *checkoutAsGuestString;

/*!
 @brief A property containing a content id string.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *contentIdString;

/*!
 @brief A property containing a content type string.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *contentTypeString;

/*!
 @brief A property containing a currency type string.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *currencyString;

/*!
 @brief A property containing a date
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSDate *date;

/*!
 @brief A property containing a date string.  This property can be used as an alternate to date when a specific date format is desired.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *dateString;

/*!
 @brief A property containing a description.  Its type is a string, and it can contain any alphanumeric value.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *descriptionString;

/*!
 @brief A property containing a destination.  Its type is a string, and it can contain any alphanumeric value.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *destinationString;

/*!
 @brief A property that contains a duration.  Its type is a time interval, wrapped in an NSNumber.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSNumber *durationTimeIntervalNumber;

/*!
 @brief A property containing an end date.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSDate *endDate;

/*!
 @brief A property that contains an end date.  This can be used as an alternate to endDate when a specific date format is desired.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *endDateString;

/*!
 @brief A property that contains an indication of where an item as added from.  Its type is a string, and it can contain any alphanumeric value.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *itemAddedFromString;

/*!
 @brief A property that contains a level.  Its type is a string, and it can contain any alphanumeric value.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *levelString;

/*!
 @brief A property that contains a maximum rating value.  Its type is a double, wrapped in an NSNumber.  This property is used in conjunction with ratingValueDoubleNumber.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSNumber *maxRatingValueDoubleNumber;

/*!
 @brief A property that contains a name.  Its type is a string, and it can contain any alphanumeric value.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.  It can be a person's name or the name of any other object.
 */
@property (strong, nonatomic) NSString *nameString;

/*!
 @brief A property that contains an order id.  Its type is a string, and it can contain any alphanumeric value.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *orderIdString;

/*!
 @brief A property that contains an origin.  Its type is a string, and it can contain any alphanumeric value.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *originString;

/*!
 @brief A property that contains a price.  Its type is a double, wrapped in an NSNumber.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSNumber *priceDoubleNumber;

/*!
 @brief A property that contains a quantity.  Its type is a double, wrapped in an NSNumber.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSNumber *quantityDoubleNumber;

/*!
 @brief A property that contains a rating value.  Its type is a double, wrapped in an NSNumber.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSNumber *ratingValueDoubleNumber;

/*!
 @brief A property that contains a receipt id.  Its type is a string, and it can contain any alphanumeric value.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *receiptIdString;

/*!
 @brief A property that contains where something was referred from.  Its type is a string, and it can contain any alphanumeric value.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *referralFromString;

/*!
 @brief A property that contains a registration method.  Its type is a string, and it can contain any alphanumeric value.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *registrationMethodString;

/*!
 @brief A property that contains results.  Its type is a string, and it can contain any alphanumeric value.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *resultsString;

/*!
 @brief A property that contains a score.  Its type is a string, and it can contain any alphanumeric value.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *scoreString;

/*!
 @brief A property that contains a search term (or terms).  Its type is a string, and it can contain any alphanumeric value.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *searchTermString;

/*!
 @brief A property that contains a start date.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSDate *startDate;

/*!
 @brief A property that contains a start date.  Its type is a string, and it can be used as an alternate to startDate when a specific display format is desired.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *startDateString;

/*!
 @brief A property that contains a success string.  Its type is a string, and it can be any alphanumeric value.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *successString;

/*!
 @brief A property that contains a user id.  Its type is a string, and it can be any alphanumeric value.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *userIdString;

/*!
 @brief A property that contains a username.  Its type is a string, and it can be any alphanumeric value.
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.  It is intended to be an account-style user name.  If you want to store the human name of a user, see nameString instead.
 */
@property (strong, nonatomic) NSString *userNameString;

/*!
 @brief A property that contains a validated string.  Its type is a string, which is intended to contain a boolean-like value, such as "true" or "false".
 
 @discussion This field has a somewhat generic quality, in that it can contain whatever you consider to be fitting value.
 */
@property (strong, nonatomic) NSString *validatedString;



#pragma mark - METHODS



- (NSString *)serverEventNameString;

- (NSDictionary *)serverEventDataDictionary;



#pragma mark - CLASS METHODS



/*!
 @brief Create an EventStandardParameters object.
 
 @discussion The required initializer.
 */
+ (instancetype)eventStandardParametersWithEventStandardParametersEnum:(EventStandardParametersEnum)eventStandardParametersEnum;



@end



#pragma mark - INTERFACE (TrackAndAd)



@interface TrackAndAd : NSObject
@end

@protocol KochavaNetworkAccessDelegate;
@protocol KochavaNetworkAccessDelegate <NSObject>
@optional
- (void) KochavaConnectionDidFinishLoading:(NSDictionary *)responseDict;
- (void) KochavaConnectionDidFailWithError:(NSError *)error;
- (void) KochavaRetrieveAttribution:(NSDictionary *)attributionResponseDict;
- (void) KochavaInitResult:(NSDictionary *)initResult;
- (void) KochavaInitialResult:(NSDictionary *)initialResult;
- (void) KochavaBackgroundFlushCompleted;
@end

@protocol KochavaLocationManagerDelegate;
@protocol KochavaLocationManagerDelegate <NSObject>
@optional
- (void) currentLocationUpdate:(NSDictionary*)newLocation;
@end

@protocol KochavaiAdAttributionDelegate;
@protocol KochavaiAdAttributionDelegate <NSObject>
@optional
- (void) iAdAttributionData:(NSDictionary*)iAdAttributionPayload :(bool)isUnknown;
@end

#pragma mark - -------------------------------------
#pragma mark - Kochava Client

@protocol KochavaTrackerClientDelegate;

@interface KochavaTracker : NSObject <KochavaNetworkAccessDelegate, KochavaLocationManagerDelegate, KochavaiAdAttributionDelegate>

#pragma mark - Swift Bridge
- (KochavaTracker*) swiftInitKochavaWithParams:(id)initDict;
- (void) swiftEnableConsoleLogging:(bool)enableLogging;
- (void) swiftTrackEvent:(id)eventTitle :(id)eventValue;
- (void) swiftIdentityLinkEvent:(id)identityLinkData;
- (void) swiftSpatialEvent:(id)eventTitle :(float)x :(float)y :(float)z;
- (void) swiftSetLimitAdTracking:(bool)limitAdTracking;
- (NSString*) swiftRetrieveAttribution;
- (void) swiftSendDeepLink:(id)url :(id)sourceApplication;


#pragma mark - ObjC
- (id) initWithKochavaAppId:(NSString*)appId;
- (id) initWithKochavaAppId:(NSString*)appId :(NSString*)currency;
- (id) initWithKochavaAppId:(NSString*)appId :(NSString*)currency :(bool)enableLogging;
- (id) initWithKochavaAppId:(NSString*)appId :(NSString*)currency :(bool)enableLogging :(bool)limitAdTracking;
- (id) initWithKochavaAppId:(NSString*)appId :(NSString*)currency :(bool)enableLogging :(bool)limitAdTracking :(bool)isNewUser;
- (id) initKochavaWithParams:(NSDictionary*)initDict;

- (void) enableConsoleLogging:(bool)enableLogging;

- (void) trackEventWithEventStandardParameters:(EventStandardParameters *)eventStandardParameters;
- (void) trackEvent:(NSString*)eventTitle :(NSString*)eventValue;
- (void) trackEvent:(NSString*)eventTitle
		  withValue:(NSString*)eventValue
		 andReceipt:(NSString*)encodedReceipt;
- (void) identityLinkEvent:(NSDictionary*)identityLinkData;
- (void) spatialEvent:(NSString*)eventTitle :(float)x :(float)y :(float)z;
- (void) setLimitAdTracking:(bool)limitAdTracking;
- (id) retrieveAttribution;
- (void) sendDeepLink:(NSURL*)url :(NSString*)sourceApplication;

- (NSString*) getKochavaDeviceId;

// Apple Watch
- (void) handleWatchEvents;
- (void) handleWatchEvents:(NSString*)watchLink;
- (void) handleWatchEvents:(NSString*)watchLink :(bool)calledByTrackEvent;

- (void) trackWatchEvent:(NSString*)eventTitle :(NSString*)eventValue;


@property (nonatomic, weak) id <KochavaTrackerClientDelegate> trackerDelegate;

@end


@protocol KochavaTrackerClientDelegate <NSObject>
@optional
- (void) Kochava_attributionResult:(NSDictionary*)attributionResult;

@end

