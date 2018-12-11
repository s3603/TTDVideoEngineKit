# TTDVideoEngineKit SDK

## 概述

[妥妥递]双录SDK。此仓库是 `iOS SDK` 的发布仓库。

## SDK 结构

## 集成

添加SDK到项目中
拖拽TtdVideoEngineKit.framework与TtdVideoEngineResource.bundle进入项目，包含远程双录包还需拖拽AgoraSigKit.framework。并选中 Copy items if needed。

授权SDK中使用到的权限：麦克风、摄像头
使用 Agora SDK 前，需要对设备的摄像头和麦克风进行授权。打开 info.plist ，点击 + 图标开始添加：
Privacy - Microphone Usage Description，并填入使用麦克风的目的，例如：Video Chat。
Privacy - Camera Usage Description，并填入使用摄像头的目的，例如：Video Chat。


### 通过 CocoaPods 集成
