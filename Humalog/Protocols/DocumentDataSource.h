//
//  DocumentDataSource.h
//  Humalog
//
//  Created by Workstation on 3/15/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ContentControlProtocol.h"

@protocol DocumentDataSource <NSObject>
- (NSUInteger)numberOfDocuments;
- (UIView<ContentControlProtocol> *)viewForDocumentAtIndex:(NSUInteger)index;

@optional
- (NSString *)titleForDocumentAtIndex:(NSUInteger)index;
- (UIView<ContentControlProtocol> *)viewForPDF:(NSString *)pdf;
- (UIImageView *)previewForDocumentAtIndex:(NSUInteger)index;
//- (NSArray *)categoryNames;
//- (NSArray *)documentIndicesForCategoryNamed:(NSString *)categoryName;
//- (NSArray *)documentIndicesForCategoryAtIndex:(NSUInteger)categoryIndex;
- (NSRange)rangeForCategoryIndex:(NSUInteger)categoryIndex;
- (NSUInteger)categoryIndexForDocumentAtIndex:(NSUInteger)documentIndex;
@end
