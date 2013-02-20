//
//  TICDSiCloudBasedWholeStoreDownloadOperation.h
//  ShoppingListMac
//
//  Created by Tim Isted on 26/04/2011.
//  Copyright 2011 Tim Isted. All rights reserved.
//

#import "TICDSWholeStoreDownloadOperation.h"

/**
 `TICDSiCloudBasedWholeStoreDownloadOperation` is a "whole store download" operation designed for use with a `TICDSiCloudBasedDocumentSyncManager`.
 */
@interface TICDSiCloudBasedWholeStoreDownloadOperation : TICDSWholeStoreDownloadOperation {
@private
    NSString *_thisDocumentDirectoryPath;
    NSString *_thisDocumentWholeStoreDirectoryPath;
}

/** @name Paths */

/** The path to a given client's `WholeStore.ticdsync` file within this document's `WholeStore` directory.
 
 @param anIdentifier The unique sync identifier of the document. */
- (NSString *)pathToWholeStoreFileForClientWithIdentifier:(NSString *)anIdentifier;

/** The path to a given client's `AppliedSyncChanges.ticdsync` file within this document's `WholeStore` directory.
 
 @param anIdentifier The unique sync identifier of the document. */
- (NSString *)pathToAppliedSyncChangesFileForClientWithIdentifier:(NSString *)anIdentifier;

/** The path to this document's directory. */
@property (retain) NSString *thisDocumentDirectoryPath;

/** The path to this document's `WholeStore` directory. */
@property (retain) NSString *thisDocumentWholeStoreDirectoryPath;

@end
