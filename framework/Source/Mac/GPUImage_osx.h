#import <GPUImage_osx/GLProgram.h>

// Base classes
#import <GPUImage_osx/GLProgram.h>
#import <GPUImage_osx/GPUImageContext.h>

// Sources
#import <GPUImage_osx/GPUImageOutput.h>
#import <GPUImage_osx/GPUImageAVCamera.h>
#import <GPUImage_osx/GPUImagePicture.h>
#import <GPUImage_osx/GPUImageRawDataInput.h>
#import <GPUImage_osx/GPUImageRawDataOutput.h>

// Filters
#import <GPUImage_osx/GPUImageFilter.h>
#import <GPUImage_osx/GPUImageTwoPassFilter.h>
#import <GPUImage_osx/GPUImage3x3TextureSamplingFilter.h>
#import <GPUImage_osx/GPUImageContrastFilter.h>
#import <GPUImage_osx/GPUImageSaturationFilter.h>
#import <GPUImage_osx/GPUImageBrightnessFilter.h>
#import <GPUImage_osx/GPUImageLevelsFilter.h>
#import <GPUImage_osx/GPUImageExposureFilter.h>
#import <GPUImage_osx/GPUImageRGBFilter.h>
#import <GPUImage_osx/GPUImageHueFilter.h>
#import <GPUImage_osx/GPUImageWhiteBalanceFilter.h>
#import <GPUImage_osx/GPUImageMonochromeFilter.h>
#import <GPUImage_osx/GPUImagePixellateFilter.h>
#import <GPUImage_osx/GPUImageSobelEdgeDetectionFilter.h>
#import <GPUImage_osx/GPUImageSketchFilter.h>
#import <GPUImage_osx/GPUImageToonFilter.h>
#import <GPUImage_osx/GPUImageGrayscaleFilter.h>
#import <GPUImage_osx/GPUImageKuwaharaFilter.h>
#import <GPUImage_osx/GPUImageFalseColorFilter.h>
#import <GPUImage_osx/GPUImageSharpenFilter.h>
#import <GPUImage_osx/GPUImageUnsharpMaskFilter.h>
#import <GPUImage_osx/GPUImageTwoInputFilter.h>
#import <GPUImage_osx/GPUImageGaussianBlurFilter.h>
#import <GPUImage_osx/GPUImageTwoPassTextureSamplingFilter.h>
#import <GPUImage_osx/GPUImageFilterGroup.h>
#import <GPUImage_osx/GPUImageTransformFilter.h>
#import <GPUImage_osx/GPUImageCropFilter.h>
#import <GPUImage_osx/GPUImageGaussianBlurPositionFilter.h>
#import <GPUImage_osx/GPUImageGaussianSelectiveBlurFilter.h>
#import <GPUImage_osx/GPUImageBilateralFilter.h>
#import <GPUImage_osx/GPUImageBoxBlurFilter.h>
#import <GPUImage_osx/GPUImageSingleComponentGaussianBlurFilter.h>
#import <GPUImage_osx/GPUImageMedianFilter.h>
#import <GPUImage_osx/GPUImageMotionBlurFilter.h>
#import <GPUImage_osx/GPUImageZoomBlurFilter.h>
#import <GPUImage_osx/GPUImageAddBlendFilter.h>
#import <GPUImage_osx/GPUImageColorBurnBlendFilter.h>
#import <GPUImage_osx/GPUImageDarkenBlendFilter.h>
#import <GPUImage_osx/GPUImageDivideBlendFilter.h>
#import <GPUImage_osx/GPUImageLightenBlendFilter.h>
#import <GPUImage_osx/GPUImageMultiplyBlendFilter.h>
#import <GPUImage_osx/GPUImageOverlayBlendFilter.h>
#import <GPUImage_osx/GPUImageColorDodgeBlendFilter.h>
#import <GPUImage_osx/GPUImageLinearBurnBlendFilter.h>
#import <GPUImage_osx/GPUImageScreenBlendFilter.h>
#import <GPUImage_osx/GPUImageColorBlendFilter.h>
#import <GPUImage_osx/GPUImageExclusionBlendFilter.h>
#import <GPUImage_osx/GPUImageHueBlendFilter.h>
#import <GPUImage_osx/GPUImageLuminosityBlendFilter.h>
#import <GPUImage_osx/GPUImageNormalBlendFilter.h>
#import <GPUImage_osx/GPUImagePoissonBlendFilter.h>
#import <GPUImage_osx/GPUImageSaturationBlendFilter.h>
#import <GPUImage_osx/GPUImageSoftLightBlendFilter.h>
#import <GPUImage_osx/GPUImageHardLightBlendFilter.h>
#import <GPUImage_osx/GPUImageSubtractBlendFilter.h>
#import <GPUImage_osx/GPUImageTwoInputCrossTextureSamplingFilter.h>
#import <GPUImage_osx/GPUImageDifferenceBlendFilter.h>
#import <GPUImage_osx/GPUImageDissolveBlendFilter.h>
#import <GPUImage_osx/GPUImageChromaKeyBlendFilter.h>
#import <GPUImage_osx/GPUImageMaskFilter.h>
#import <GPUImage_osx/GPUImageOpacityFilter.h>
#import <GPUImage_osx/GPUImageAlphaBlendFilter.h>
#import <GPUImage_osx/GPUImageColorMatrixFilter.h>
#import <GPUImage_osx/GPUImageSepiaFilter.h>
#import <GPUImage_osx/GPUImageGammaFilter.h>
#import <GPUImage_osx/GPUImageHazeFilter.h>
#import <GPUImage_osx/GPUImageToneCurveFilter.h>
#import <GPUImage_osx/GPUImageHighlightShadowFilter.h>
#import <GPUImage_osx/GPUImageLookupFilter.h>
#import <GPUImage_osx/GPUImageAmatorkaFilter.h>
#import <GPUImage_osx/GPUImageMissEtikateFilter.h>
#import <GPUImage_osx/GPUImageSoftEleganceFilter.h>
#import <GPUImage_osx/GPUImage3x3ConvolutionFilter.h>
#import <GPUImage_osx/GPUImageEmbossFilter.h>
#import <GPUImage_osx/GPUImageLaplacianFilter.h>
#import <GPUImage_osx/GPUImageLanczosResamplingFilter.h>
#import <GPUImage_osx/GPUImageThreeInputFilter.h>
#import <GPUImage_osx/GPUImageColorInvertFilter.h>
#import <GPUImage_osx/GPUImageHistogramFilter.h>
#import <GPUImage_osx/GPUImageHistogramGenerator.h>
#import <GPUImage_osx/GPUImageAverageColor.h>
#import <GPUImage_osx/GPUImageLuminosity.h>
#import <GPUImage_osx/GPUImageSolidColorGenerator.h>
#import <GPUImage_osx/GPUImageAdaptiveThresholdFilter.h>
#import <GPUImage_osx/GPUImageAverageLuminanceThresholdFilter.h>
#import <GPUImage_osx/GPUImageLuminanceThresholdFilter.h>
#import <GPUImage_osx/GPUImageHalftoneFilter.h>
#import <GPUImage_osx/GPUImagePixellatePositionFilter.h>
#import <GPUImage_osx/GPUImagePolarPixellateFilter.h>
#import <GPUImage_osx/GPUImagePolkaDotFilter.h>
#import <GPUImage_osx/GPUImageCrosshatchFilter.h>
#import <GPUImage_osx/GPUImageXYDerivativeFilter.h>
#import <GPUImage_osx/GPUImageDirectionalNonMaximumSuppressionFilter.h>
#import <GPUImage_osx/GPUImageDirectionalSobelEdgeDetectionFilter.h>
#import <GPUImage_osx/GPUImageCannyEdgeDetectionFilter.h>
#import <GPUImage_osx/GPUImagePrewittEdgeDetectionFilter.h>
#import <GPUImage_osx/GPUImageThresholdEdgeDetectionFilter.h>
#import <GPUImage_osx/GPUImageHarrisCornerDetectionFilter.h>
#import <GPUImage_osx/GPUImageNobleCornerDetectionFilter.h>
#import <GPUImage_osx/GPUImageShiTomasiFeatureDetectionFilter.h>
#import <GPUImage_osx/GPUImageThresholdedNonMaximumSuppressionFilter.h>
#import <GPUImage_osx/GPUImageColorPackingFilter.h>
#import <GPUImage_osx/GPUImageHoughTransformLineDetector.h>
#import <GPUImage_osx/GPUImageParallelCoordinateLineTransformFilter.h>
#import <GPUImage_osx/GPUImageCrosshairGenerator.h>
#import <GPUImage_osx/GPUImageLineGenerator.h>
#import <GPUImage_osx/GPUImageBuffer.h>
#import <GPUImage_osx/GPUImageLowPassFilter.h>
#import <GPUImage_osx/GPUImageHighPassFilter.h>
#import <GPUImage_osx/GPUImageMotionDetector.h>
#import <GPUImage_osx/GPUImageThresholdSketchFilter.h>
#import <GPUImage_osx/GPUImageSmoothToonFilter.h>
#import <GPUImage_osx/GPUImageTiltShiftFilter.h>
#import <GPUImage_osx/GPUImageCGAColorspaceFilter.h>
#import <GPUImage_osx/GPUImagePosterizeFilter.h>
#import <GPUImage_osx/GPUImageKuwaharaRadius3Filter.h>
#import <GPUImage_osx/GPUImageChromaKeyFilter.h>
#import <GPUImage_osx/GPUImageVignetteFilter.h>
#import <GPUImage_osx/GPUImageBulgeDistortionFilter.h>
#import <GPUImage_osx/GPUImagePinchDistortionFilter.h>
#import <GPUImage_osx/GPUImageStretchDistortionFilter.h>
#import <GPUImage_osx/GPUImageClosingFilter.h>
#import <GPUImage_osx/GPUImageRGBClosingFilter.h>
#import <GPUImage_osx/GPUImageDilationFilter.h>
#import <GPUImage_osx/GPUImageRGBDilationFilter.h>
#import <GPUImage_osx/GPUImageErosionFilter.h>
#import <GPUImage_osx/GPUImageRGBErosionFilter.h>
#import <GPUImage_osx/GPUImageOpeningFilter.h>
#import <GPUImage_osx/GPUImageRGBOpeningFilter.h>
#import <GPUImage_osx/GPUImageSphereRefractionFilter.h>
#import <GPUImage_osx/GPUImageGlassSphereFilter.h>
#import <GPUImage_osx/GPUImageSwirlFilter.h>
#import <GPUImage_osx/GPUImageJFAVoronoiFilter.h>
#import <GPUImage_osx/GPUImageVoronoiConsumerFilter.h>
#import <GPUImage_osx/GPUImageLocalBinaryPatternFilter.h>
#import <GPUImage_osx/GPUImageMosaicFilter.h>
#import <GPUImage_osx/GPUImagePerlinNoiseFilter.h>

// Outputs
#import <GPUImage_osx/GPUImageView.h>
#import <GPUImage_osx/GPUImageMovieWriter.h>
