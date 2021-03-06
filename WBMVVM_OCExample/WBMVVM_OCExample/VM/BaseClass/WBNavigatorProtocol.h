//
//  WBNavigatorProtocol.h
//  WBMVVM_OCExample
//
//  Created by wenbo on 2020/8/28.
//  Copyright © 2020 huibo2. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WBViewModel.h"
#import "WBConstant.h"

NS_ASSUME_NONNULL_BEGIN

@protocol WBNavigatorProtocol <NSObject>

/// Pushes the corresponding view controller.
///
/// Uses a horizontal slide transition.
/// Has no effect if the corresponding view controller is already in the stack.
///
/// viewModel - the view model
/// animated  - use animation or not
- (void)pushViewModel:(WBViewModel *)viewModel animated:(BOOL)animated;

/// Pops the top view controller in the stack.
///
/// animated - use animation or not
- (void)popViewModelAnimated:(BOOL)animated;

/// Pops until there's only a single view controller left on the stack.
///
/// animated - use animation or not
- (void)popToRootViewModelAnimated:(BOOL)animated;

/// Present the corresponding view controller.
///
/// viewModel  - the view model
/// animated   - use animation or not
/// completion - the completion handler
- (void)presentViewModel:(WBViewModel *)viewModel animated:(BOOL)animated completion:(WBVoidBlock)completion;

/// Dismiss the presented view controller.
///
/// animated   - use animation or not
/// completion - the completion handler
- (void)dismissViewModelAnimated:(BOOL)animated completion:(WBVoidBlock)completion;

/// Reset the corresponding view controller as the root view controller of the application's window.
///
/// viewModel - the view model
- (void)resetRootViewModel:(WBViewModel *)viewModel;

@end

NS_ASSUME_NONNULL_END
