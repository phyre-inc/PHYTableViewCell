Pod::Spec.new do |s|
  s.name             = "PHYTableViewCell"
  s.version          = "1.0.0"
  s.summary          = "Better UITableViewCell management."
  s.homepage         = "http://rallyapp.io"
  s.license          = 'MIT'
  s.author           = { "Matt Ricketson" => "matt@phyreup.com" }
  s.source           = { :git => "git@bitbucket.org:phyre/phytableviewcell.git", :tag => s.version.to_s }
  s.social_media_url = 'https://twitter.com/phyreup'

  s.platform         = :ios, '7.0'
  s.requires_arc     = true

  s.source_files     = 'Classes/*.{h,m}'
end
