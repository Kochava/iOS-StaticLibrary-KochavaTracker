# iOS-StaticLibrary-KochavaTracker

[![Releases](https://img.shields.io/github/v/release/kochava/iOS-StaticLibrary-KochavaTracker?include_prereleases&sort=semver)](https://github.com/Kochava/iOS-StaticLibrary-KochavaTracker/releases)

<img src="https://storage.googleapis.com/kochava-web/2016/07/Kochava-horizontal-black-800x154.png" width="260" />

## Deprecation Advisory

This module was deprecated on March 9th, 2023.  With the release of version 6.1.1 of the Kochava Apple SDK, the transition from Objective-C to Swift was complete, and we discontinued all static library products in favor of xcframeworks.  Please contact support@kochava.com if you have any questions.  The link to the equivalent product as a Swift Package which contains the equivalent xcframework is listed below:

[https://github.com/Kochava/Apple-SwiftPackage-KochavaTracker](https://github.com/Kochava/Apple-SwiftPackage-KochavaTracker)

## iOS Static-Library KochavaTracker

The KochavaTracker module is an optional module within the Kochava SDK providing install attribution and analytics.

The Kochava SDK is a lightweight and easy to integrate SDK written in Objective-C and Swift, providing first-class integration with Kochava’s industry leading mobile attribution and analytics platform.

## Built on

* Xcode 12.4

## Platforms

* iOS 10.3

## Dependencies

* [KochavaCore](https://github.com/Kochava/iOS-StaticLibrary-KochavaCore) [![Download](https://img.shields.io/github/v/release/kochava/iOS-StaticLibrary-KochavaCore?include_prereleases&sort=semver)](https://github.com/Kochava/iOS-StaticLibrary-KochavaCore/releases)

## Integration

[Kochava Apple SDK Integration](https://support.kochava.com/sdk-integration/sdk-kochavatracker-ios)

## Author

Kochava, support@kochava.com

## License

KochavaTracker is available under the Kochava Terms of Service.


## Default Branch

As of October 1, 2020, github.com uses the branch name ‘main’ when creating the initial default branch for all new repositories.  In order to minimize any customizations in our github usage and to support consistent naming conventions, we have made the decision to rename the ‘master’ branch to be called ‘main’ in all Kochava’s github repos.

For local copies of the repo, the following steps will update to the new default branch:

```
git branch -m master main
git fetch origin
git branch -u origin/main main
git remote set-head origin -a
```
