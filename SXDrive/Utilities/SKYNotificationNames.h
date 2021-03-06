//
//  SKYNotificationNames.h
//  SXDrive
//
//  Created by Skylable on 29/10/14.
//  Copyright (C) 2015-2016 Skylable Ltd. <info-copyright@skylable.com>
//  License: Apache 2.0, see LICENSE for more details.
//

@import Foundation;

/**
 * Name of the notification sent when the application has received URL according to the URL schemes array.
 * The object of this notification is UIApplication
 * The user info contains URL for `SKYInfoKeyForURL` key.
 */
extern NSString * const SKYApplicationReceivedActivationURLNotification;

/**
 * Name of the notification sent when the user's passcode is changed.
 * The object of this notification is <SKYUser>
 */
extern NSString * const SKYUserPasscodeDidChangeNotification;

/**
 * Name of the notification sent when sorting type has been changed.
 */
extern NSString * const SKYSortingTypeDidChangeNotification;

/**
 * Name of the notification sent when download progress changes.
 * @note Object of this notification is SKYItem, user info contains progress for `SKYInfoKeyForDownloadProgress` key.
 */
extern NSString * const SKYDownloadProgressDidChangeNotification;

/**
 * Name of the notification sent when download starts.
 * @note Object of this notification is SKYItem.
 */
extern NSString * const SKYUploadDidFinishNotification;

/**
 * Name of the notification sent when download progress changes.
 * @note Object of this notification is SKYItem, user info contains progress for `SKYInfoKeyForUploadProgress` key.
 */
extern NSString * const SKYUploadProgressDidChangeNotification;

/**
 * Name of the notification sent when there is new total size of requests and responses generated by this app.
 * @note Object of this notification is network manager.
 */
extern NSString * const SKYNetworkUsageDidChangeNotification;

/**
 * Name of the notification sent when disk usage changed.
 * @note Object of this notification is disk manager.
 */
extern NSString * const SKYDiskUsageDidChangeNotification;

/**
 * Name of the notification sent when network did change state.
 * @note Object of this notification is network manager.
 */
extern NSString * const SKYNetworkDidChangeStateNotification;

/**
 * Name of the notification sent when user wants to play media in external view controller.
 * @note Object of this notification is NSURL to media.
 */
extern NSString * const SKYPlayMediaInExternalVCNotification;

/**
 * Name of the notification sent when alert controller should be displayed.
 * @note Object of this notification is UIAlertController.
 */
extern NSString * const SKYDisplayAlertVCNotification;

/**
 * Name of the notification sent when i.g. cache has been removed.
 * @note Object of this notification is disk manager.
 */
extern NSString * const SKYMajorFileStructureDidChangeNotification;

/**
 * Name of the notification sent when the application has received URL according to the URL schemes array.
 * The object of this notification is UIApplication
 * The user info contains URL for `SKYInfoKeyForURL` key.
 */
extern NSString * const SKYApplicationReceivedImportFileNotification;
