//
//  TICDSiCloudBasedListOfApplicationRegisteredClientsOperation.h
//  Notebook
//
//  Created by Tim Isted on 23/05/2011.
//  Copyright 2011 Tim Isted. All rights reserved.
//

#import "TICDSListOfApplicationRegisteredClientsOperation.h"

/**
 `TICDSiCloudBasedListOfApplicationRegisteredClientsOperation` is a "list of clients registered to an application" operation designed for use with a `TICDSiCloudBasedApplicationSyncManager`.
 */

@interface TICDSiCloudBasedListOfApplicationRegisteredClientsOperation : TICDSListOfApplicationRegisteredClientsOperation {
@private
    NSString *_clientDevicesDirectoryPath;
    NSString *_documentsDirectoryPath;
}

/** @name Paths */

/** The path to the `ClientDevices` directory. */
@property (retain) NSString *clientDevicesDirectoryPath;

/** The path to the `Documents` directory. */
@property (retain) NSString *documentsDirectoryPath;

@end
