Pod::Spec.new do |s|
  s.name     = 'GPUImage'
  s.version  = '0.1.2'
  s.license  = 'BSD'
  s.ios.deployment_target  = '5.0'
  s.osx.deployment_target  = '10.8'
  s.summary  = 'An open source iOS framework for GPU-based image and video processing.'
  s.homepage = 'https://github.com/BradLarson/GPUImage'
  s.author   = { 'Brad Larson' => 'contact@sunsetlakesoftware.com' }
  s.source   = { :git => 'https://github.com/securebroadcast/GPUImage.git', :tag => "#{s.version}" }
  s.source_files = 'framework/Source/**/*.{h,m}'
  s.resources = 'framework/Resources/*.png'
  s.osx.exclude_files = 'framework/Source/iOS/**/*.{h,m}'
  s.ios.exclude_files = 'framework/Source/Mac/**/*.{h,m}'
  s.osx.frameworks   = ['OpenGL', 'CoreVideo', 'CoreMedia', 'QuartzCore', 'AVFoundation']
  s.ios.frameworks   = ['OpenGLES', 'CoreVideo', 'CoreMedia', 'QuartzCore', 'AVFoundation']  
  s.ios.requires_arc = true
  s.osx.requires_arc = false
end