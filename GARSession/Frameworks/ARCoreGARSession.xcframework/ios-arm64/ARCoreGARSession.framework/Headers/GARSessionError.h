/*
 * Copyright 2018 Google LLC. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

/** The domain for `NSError`s generated by a `GARSession`. */
FOUNDATION_EXTERN const NSErrorDomain _Nonnull GARSessionErrorDomain;

/** @defgroup GARSessionErrorCode */

/**
 * @ingroup GARSessionErrorCode
 * Possible codes for `NSError`s generated by a `GARSession`.
 */
typedef NS_ERROR_ENUM(GARSessionErrorDomain, GARSessionErrorCode) {
  /**
   * This device or OS version is not currently supported.
   * Supported OS versions are documented in `README.md`.
   */
  GARSessionErrorCodeDeviceNotCompatible = -1,

  /** An argument is `nil` or otherwise invalid (as noted in doc comment). */
  GARSessionErrorCodeInvalidArgument = -2,

  /**
   * The operation could not be completed because the `ARSession`'s current tracking state is not
   * `ARTrackingStateNormal`.
   */
  GARSessionErrorCodeNotTracking = -3,

  /**
   * An `ARFrame` was passed to `GARSession#update:error:` that is older than a previously passed in
   * frame. @see `GARSession#update:error:`
   */
  GARSessionErrorCodeFrameOutOfOrder = -4,

  /**
   * `GARSession#hostCloudAnchor:error:` was called with an unsupported `ARAnchor` type. Currently
   * there are no unsupported anchor types.
   */
  GARSessionErrorCodeAnchorNotSupportedForHosting = -5,

  /** There are no available resources to complete the operation. */
  GARSessionErrorCodeResourceExhausted = -6,

  /**
   * The operation could not be completed because location permission was not granted with
   * full accuracy.
   */
  GARSessionErrorCodeLocationPermissionNotGranted = -7,

  /** The configuration could not be set because it is unsupported on this device. */
  GARSessionErrorCodeConfigurationNotSupported = -8,

  /** The operation could not be completed because the session is in the wrong state. */
  GARSessionErrorCodeIllegalState = -9,
};
