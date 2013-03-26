#ZmagsSDK-iOS - Beta v1

##Current Status

This is the initial release of the Zmags iOS SDK. It currently has a very limited set of features, but many more to come in the near future. The reason for the small set of features is to provide a solid well thought out SDK that performs well, easy to use, and bug free.

##How To Use This
The Zmags iOS SDK components allow for customization without any code using the Zmags App Content Management System. The content management system will allow for changing of colors/images of various aspects of the views, adding and removing of publications, and restructuring of the content in the views. This aspect is not demoed in the demo project for the SDK and is best demoed in person. To request a demo or ask questions about the Zmags SDK please visit http://zmags.com/partner-program.

##Requirements

* iOS 5.1 and Above
* Automatic Refrence Couting (ARC)
* Currently iPad Support Only
* Currently Landscape Support Only
* Zmags API Key and Zmags App Key
  * This is needed for customizations, demo api and app key has been provided with demo.
  * http://zmags.com/partner-program/ 

##Installation

* Drag and drop the ZmagsSDK.framework folder into your project or add it using file add files. It should appear like any other framework. Ex. QuartCore.framework, CoreData.freamework, etc.

* Right click on the framework and click show in finder. Now that you have the framework folder selected click on resources and you should see ZmagsSDKResources.bundle add that to the project. This can be done by dragging and dropping into the project or clicking file and add files.

* Since frameworks uses by a framework are not copied into the framework but instead referenced we need to add ZmagsSDK's dependent frameworks. Add the following, as you would do with any other project. Click the project in the project navigator then select the project in targets. Select "Build Phases" and then click "Link Binary with Libraries". While your here make sure ZmagsSDK.framework is in the list if its not click the + and add it. Then add the following frameworks below:

#Frameworks
* CoreData
* CoreMotion
* AVFoundation
* QuartzCore
* SystemConfiguration
* CoreMedia
* MessageUI
* MobileCoreServices
* FacebookSDK
  * Found https://github.com/facebook/facebook-ios-sdk or in demo app.
 
These frameworks must be included but should be marked as optional to allow for support of iOS version 5.1. This can be done in the "Link Binary With Libraries" section of "Build Phases". There is a drop down that says required next to the frameworks change that to option.

* AdSupport (optional)
* Accounts (optional)
* Social (optional)

#Linker Flags
* Add the following linker flags in the build settings tab. This can be found by clicking the project in the project navigator then the project in targets. Select the build settings tab and search for other linker flags and add the following:

```
-lsqlite3.0
-ObjC
```

##Usage

Now that the framework has been added it can be treated like any other framework. Just add #import <ZmagsSDK/ZmagsSDK.h> in any files that will make use of the SDK.

#Loading SDK

In order to get the initial data or any changes that have been made on the Zmags backend a loading function must be called. The data retrieved by this function will persist but will not be initially populated. So be sure to call is before trying to display any of the components discussed below.

```
[[ZmagsService sharedInstance] loadApp:@"App Key" withApiKey:@"Api Key" modulesCompleted:^{
   //Currently no use for this but in the near future more functionality will be added
} andDataCompleted:^{
   //The structure and data for the views described below has loaded.
}];

```

#Displaying Carousel

With Parent Controller
```
//Parent controller that the Carousel will be a child of.
UIViewController *parentViewController = [[UIViewController alloc] init];

CarouselViewController *carouselViewController = [[CarouselViewController alloc] init];    
[parentViewController addChildViewController:carouselViewController];
[parentViewController.view addSubview:carouselViewController.view];
```

As Modal
```
[self presentModalViewController:[[CarouselViewController alloc] init] animated:YES];
```

#Displaying Bookshelf

With Parent Controller
```
//Parent controller that the Carousel will be a child of.
UIViewController *parentViewController = [[UIViewController alloc] init];

BookshelfViewController *bookshelfViewController = [[BookshelfViewController alloc] init];    
[parentViewController addChildViewController:bookshelfViewController];
[parentViewController.view addSubview:bookshelfViewController.view];
```

As Modal
```
[self presentModalViewController:[[BookshelfViewController alloc] init] animated:YES];
```

#Displaying Viewer

With Parent Controller
```
//Parent controller that the Carousel will be a child of.
UIViewController *parentViewController = [[UIViewController alloc] init];

ViewerViewController *viewerViewController = [[ViewerViewController alloc] init];    
[parentViewController addChildViewController:viewerViewController];
[parentViewController.view addSubview:viewerViewController.view];
```

As Modal
```
[self presentModalViewController:[[ViewerViewController alloc] init] animated:YES];
```

## Demo App

The provided demo app shows examples of each of the above Zmags SDK components as well as how they integrate with a tab bar controller. 
