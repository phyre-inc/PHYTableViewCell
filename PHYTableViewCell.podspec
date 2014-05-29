Pod::Spec.new do |s|
  s.name             = "PHYTableViewCell"
  s.version          = "1.0.2"
  s.summary          = "Convenient UITableViewCell and UITableViewHeaderFooterView loading and registration."
  s.homepage         = "http://rallyapp.io"
  s.license          = 'MIT'
  s.author           = { "Matt Ricketson" => "matt@phyreup.com" }
  s.source           = { :git => "https://github.com/phyre-inc/PHYTableViewCell.git", :tag => s.version.to_s }
  s.social_media_url = 'https://twitter.com/phyreup'

  s.platform         = :ios, '7.0'
  s.requires_arc     = true

  s.source_files     = 'Classes/*.{h,m}'
end
