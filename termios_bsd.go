// +build darwin freebsd netbsd openbsd

package fineline

import (
	"syscall"
)

func tcgetattr(fd int, t *termios) {
	ttyIoctl(0, syscall.TIOCGETA, t)
}

func tcsetattr(fd int, t *termios) {
	var cmd int
	switch op {
	case TCSANOW:
		cmd = syscall.TIOCSETA
	case TCSADRAIN:
		cmd = syscall.TIOCSETAW
	case TCSAFLUSH:
		cmd = syscall.TIOCSETAF
	}
	ttyIoctl(0, cmd, t)
}