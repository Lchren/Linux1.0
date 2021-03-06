#ifndef _LINUX_VFS_H
#define _LINUX_VFS_H

typedef struct {
	long    val[2];
} fsid_t;


/* 文件系统的信息结构 */
struct statfs {
	long f_type;
	long f_bsize;
	long f_blocks;
	long f_bfree;
	long f_bavail;
	long f_files;
	long f_ffree;
	fsid_t f_fsid;
	long f_namelen;
	long f_spare[6];
};

#endif
