#include <termios.h>
#include <sys/ioctl.h>

enum {
	$TCGETS = TCGETS,
	$TCSETS = TCSETS,
	$TCSETSW = TCSETSW,
	$TCSETSF = TCSETSF,
	$TIOCGWINSZ = TIOCGWINSZ,
	
	/* c_iflag bits */
	$IGNBRK = IGNBRK,
	$BRKINT = BRKINT,
	$IGNPAR = IGNPAR,
	$PARMRK = PARMRK,
	$INPCK = INPCK,
	$ISTRIP = ISTRIP,
	$INLCR = INLCR,
	$IGNCR = IGNCR,
	$ICRNL = ICRNL,
	$IUCLC = IUCLC,
	$IXON = IXON,
	$IXANY = IXANY,
	$IXOFF = IXOFF,
	$IMAXBEL = IMAXBEL,
	$IUTF8 = IUTF8,
	
	/* c_oflag bits */
	$OPOST = OPOST,
	$OLCUC = OLCUC,
	$ONLCR = ONLCR,
	$OCRNL = OCRNL,
	$ONOCR = ONOCR,
	$ONLRET = ONLRET,
	$OFILL = OFILL,
	$OFDEL = OFDEL,
	
	$CS8 = CS8,
	
	/* c_lflag bits */
	$ISIG = ISIG,
	$ICANON = ICANON,
	$ECHO = ECHO,
	$ECHOE = ECHOE,
	$ECHOK = ECHOK,
	$ECHONL = ECHONL,
	$NOFLSH = NOFLSH,
	$TOSTOP = TOSTOP,
	$IEXTEN = IEXTEN,
	
	/* c_cc characters */
	$VINTR = VINTR,
	$VQUIT = VQUIT,
	$VERASE = VERASE,
	$VKILL = VKILL,
	$VEOF = VEOF,
	$VTIME = VTIME,
	$VMIN = VMIN,
	$VSWTC = VSWTC,
	$VSTART = VSTART,
	$VSTOP = VSTOP,
	$VSUSP = VSUSP,
	$VEOL = VEOL,
	$VREPRINT = VREPRINT,
	$VDISCARD = VDISCARD,
	$VWERASE = VWERASE,
	$VLNEXT = VLNEXT,
	$VEOL2 = VEOL2,
	
	/* tcsetattr uses these */
	$TCSANOW = TCSANOW,
	$TCSADRAIN = TCSADRAIN,
	$TCSAFLUSH = TCSAFLUSH,
};

typedef struct termios $termios;
typedef struct winsize $winsize;
