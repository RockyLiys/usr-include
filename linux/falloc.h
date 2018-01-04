#ifndef _FALLOC_H_
#define _FALLOC_H_

#define FALLOC_FL_KEEP_SIZE	0x01 /* default is extend size */
#define FALLOC_FL_PUNCH_HOLE	0x02 /* de-allocates range */

/* We set FALLOC_FL_EXPOSE_STALE_DATA to 0x04 because, in current upstream,
 * FALLOC_FL_PUNCH_HOLE is 0x02.
 */
#define FALLOC_FL_EXPOSE_STALE_DATA	0x04 /* expose stale data */


#endif /* _FALLOC_H_ */
