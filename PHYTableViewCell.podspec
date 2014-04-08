Pod::Spec.new do |s|
  s.name             = "PHYTableViewCell"
  s.version          = "0.1.0"
  s.summary          = "Better UITableViewCell management."
  s.homepage         = "http://rallyapp.io"
  s.license          = 'MIT'
  s.author           = { "Matt Ricketson" => "matt@phyreup.com" }
  s.source           = { :git => "git@bitbucket.org:phyre/phytableviewcell.git", :tag => s.version.to_s }
  s.social_media_url = 'https://twitter.com/phyreup'

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.public_header_files = 'Classes/*.h'
  s.source_files = 'PHYTableViewCell'
end
