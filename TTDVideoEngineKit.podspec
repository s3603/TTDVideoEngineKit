Pod::Spec.new do |s|

  s.name         = "TTDVideoEngineKit"
  s.version      = "0.2.0"
  s.summary      = "TTD TTDVideoEngineKit."
  s.homepage     = "http://www.totodi.cn/"
  s.license 	 = { :'type' => 'Copyright', :'text' => ' Copyright 2018 TTD '}   
  s.author	 = 'TTD iOS Team'

  s.source       = { :git => "https://github.com/s3603/TTDVideoEngineKit.git", :tag => "#{s.version}" }
  s.platform = :ios, '9.0' 
  s.vendored_frameworks = '**/TtdVideoEngineKit.framework','**/AgoraSigKit.framework'
  s.resources  = '**/Resources/TtdVideoEngineResource.bundle'
  s.dependency 'AFNetworking'
  s.dependency 'SVProgressHUD'
  s.dependency 'AgoraRtcEngine_iOS'

end
