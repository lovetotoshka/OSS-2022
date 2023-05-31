Name:       c-b20-515-06
Version:    1.0
Release:    1%{?dist}
Summary:    Программа студента Zlochevskiy Vladislav группы B20-515
Group:      Testing
License:    GPL
URL:        https://github.com/1aadiez/OSS_LABS
Source:     %{name}-%{version}.tar.gz
BuildRequires: gcc

%global debug_package %{nil}


%description
A test package

%prep
%setup -q

%build
gcc -O2 -o c-b20-515-06 c-b20-515-06.c

%install
mkdir -p %{buildroot}%{_bindir}
cp c-b20-515-06 %{buildroot}%{_bindir}
sudo rpm -i ~/rpmbuild/RPMS/noarch/b20-515-06-1.0-1.el8.noarch.rpm --force

%files
%{_bindir}/c-b20-515-06

%changelog
* Mon May 29 2023 Zlochevskiy
- Added %{_bindir}/c-b20-515-06
