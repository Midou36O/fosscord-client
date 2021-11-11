// AutolinkedNativeModules.g.cpp contents generated by "react-native autolink-windows"
// clang-format off
#include "pch.h"
#include "AutolinkedNativeModules.g.h"

// Includes from react-native-code-push
#include <winrt/Microsoft.CodePush.ReactNative.h>

// Includes from react-native-webview
#include <winrt/ReactNativeWebView.h>

namespace winrt::Microsoft::ReactNative
{

void RegisterAutolinkedNativeModulePackages(winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::ReactNative::IReactPackageProvider> const& packageProviders)
{ 
    // IReactPackageProviders from react-native-code-push
    packageProviders.Append(winrt::Microsoft::CodePush::ReactNative::ReactPackageProvider());
    // IReactPackageProviders from react-native-webview
    packageProviders.Append(winrt::ReactNativeWebView::ReactPackageProvider());
}

}
