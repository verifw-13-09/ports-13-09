PORTNAME=	Net-GitHub
PORTVERSION=	1.05
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to github.com
WWW=		https://metacpan.org/release/Net-GitHub

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Cache-LRU>=0:devel/p5-Cache-LRU \
		p5-HTTP-Message>0:www/p5-HTTP-Message \
		p5-JSON-MaybeXS>=0:converters/p5-JSON-MaybeXS \
		p5-LWP-Protocol-https>=0:www/p5-LWP-Protocol-https \
		p5-Moo>=0:devel/p5-Moo \
		p5-Type-Tiny>=0:devel/p5-Type-Tiny \
		p5-URI>=0:net/p5-URI \
		p5-libwww>=0:www/p5-libwww

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
