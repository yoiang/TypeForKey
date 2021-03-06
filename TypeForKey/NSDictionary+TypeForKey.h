//
//  NSDictionary+TypeForKey.h
//
//  Created by Ian on 9/28/13.
//
//

#import <Foundation/Foundation.h>

@interface NSDictionary (TypeForKey)

-(NSString*)stringForKey:(NSString*)key;
-(NSArray*)arrayForKey:(NSString*)key;
-(NSDictionary*)dictionaryForKey:(NSString *)key;
-(NSNumber*)numberForKey:(NSString *)key;
-(BOOL)boolForKey:(NSString *)key withDefaultValue:(BOOL)defaultValue;

@end
