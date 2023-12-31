PORTNAME=	snazy
DISTVERSION=	0.51.2
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Snazzy json log viewer
WWW=		https://github.com/chmouel/snazy

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cargo
USE_GITHUB=	yes
GH_ACCOUNT=	chmouel

CARGO_CRATES=	aho-corasick-1.0.1 \
		android-tzdata-0.1.1 \
		android_system_properties-0.1.5 \
		anstream-0.3.0 \
		anstyle-1.0.0 \
		anstyle-parse-0.2.0 \
		anstyle-query-1.0.0 \
		anstyle-wincon-1.0.0 \
		atty-0.2.14 \
		autocfg-1.1.0 \
		bitflags-1.3.2 \
		bumpalo-3.12.0 \
		cc-1.0.79 \
		cfg-if-1.0.0 \
		chrono-0.4.26 \
		clap-4.3.8 \
		clap_builder-4.3.8 \
		clap_complete-4.3.1 \
		clap_derive-4.3.2 \
		clap_lex-0.5.0 \
		codespan-reporting-0.11.1 \
		color-print-0.3.4 \
		color-print-proc-macro-0.3.4 \
		colorchoice-1.0.0 \
		core-foundation-sys-0.8.3 \
		cxx-1.0.94 \
		cxx-build-1.0.94 \
		cxxbridge-flags-1.0.94 \
		cxxbridge-macro-1.0.94 \
		errno-0.3.1 \
		errno-dragonfly-0.1.2 \
		fastrand-1.9.0 \
		heck-0.4.1 \
		hermit-abi-0.1.19 \
		hermit-abi-0.3.1 \
		iana-time-zone-0.1.54 \
		iana-time-zone-haiku-0.1.1 \
		instant-0.1.12 \
		io-lifetimes-1.0.11 \
		is-terminal-0.4.6 \
		itoa-1.0.6 \
		js-sys-0.3.61 \
		libc-0.2.146 \
		link-cplusplus-1.0.8 \
		linux-raw-sys-0.3.8 \
		log-0.4.17 \
		memchr-2.5.0 \
		minimal-lexical-0.2.1 \
		nom-7.1.3 \
		num-traits-0.2.15 \
		once_cell-1.17.1 \
		proc-macro2-1.0.54 \
		quote-1.0.26 \
		redox_syscall-0.3.5 \
		regex-1.8.4 \
		regex-syntax-0.7.2 \
		rustix-0.37.19 \
		ryu-1.0.13 \
		scratch-1.0.5 \
		serde-1.0.164 \
		serde_derive-1.0.164 \
		serde_json-1.0.99 \
		strsim-0.10.0 \
		syn-1.0.109 \
		syn-2.0.11 \
		tempfile-3.6.0 \
		termcolor-1.2.0 \
		unicode-ident-1.0.8 \
		unicode-width-0.1.10 \
		utf8parse-0.2.1 \
		wasm-bindgen-0.2.84 \
		wasm-bindgen-backend-0.2.84 \
		wasm-bindgen-macro-0.2.84 \
		wasm-bindgen-macro-support-0.2.84 \
		wasm-bindgen-shared-0.2.84 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.5 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-0.46.0 \
		windows-sys-0.45.0 \
		windows-sys-0.48.0 \
		windows-targets-0.42.2 \
		windows-targets-0.48.0 \
		windows_aarch64_gnullvm-0.42.2 \
		windows_aarch64_gnullvm-0.48.0 \
		windows_aarch64_msvc-0.42.2 \
		windows_aarch64_msvc-0.48.0 \
		windows_i686_gnu-0.42.2 \
		windows_i686_gnu-0.48.0 \
		windows_i686_msvc-0.42.2 \
		windows_i686_msvc-0.48.0 \
		windows_x86_64_gnu-0.42.2 \
		windows_x86_64_gnu-0.48.0 \
		windows_x86_64_gnullvm-0.42.2 \
		windows_x86_64_gnullvm-0.48.0 \
		windows_x86_64_msvc-0.42.2 \
		windows_x86_64_msvc-0.48.0 \
		yansi-0.5.1

PLIST_FILES=	bin/${PORTNAME}

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
