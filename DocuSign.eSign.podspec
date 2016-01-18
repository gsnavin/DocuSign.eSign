#
# Be sure to run `pod lib lint DocuSignESignClient.podspec' to ensure this is a
# valid spec and remove all comments before submitting the spec.
#
# Any lines starting with a # are optional, but encouraged
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
    s.name             = "DocuSign.eSign"
    s.version          = "1.0.1"

    s.summary          = "DocuSign REST API"
    s.description      = <<-DESC
                         The DocuSign REST API provides you with a powerful, convenient, and simple Web services API for interacting with DocuSign.
                         DESC

    s.platform     = :ios, '7.0'
    s.requires_arc = true

    s.framework    = 'SystemConfiguration'
    
    s.homepage     = "https://www.docusign.com/developer-center"
    s.license      = "LICENSE"
    s.source       = { :git => "https://github.com/gsnavin/DocuSign.eSign.git", :tag => "#{s.version}" }
    s.author       = { "Dev Center" => "devcenter@docusign.com" }

    s.source_files = 'DocuSign.eSign/*'
    s.public_header_files = 'DocuSign.eSign/*.h'

    s.dependency 'AFNetworking', '~> 2.3'
    s.dependency 'JSONModel', '~> 1.1'
    s.dependency 'ISO8601', '~> 0.3'
end

