/*
外排序的一个例子是外归并排序（External merge sort），它读入一些能放在内存内的数据量，在内存中排序后输出为一个顺串（即是内部数据有序的临时文件），处理完所有的数据后再进行归并。[1][2]比如，要�?900 MB 的数据进行排序，但机器上只有 100 MB 的可用内存时，外归并排序按如下方法操作：

读入 100 MB 的数据至内存中，用某种常规方式（如快速排序、堆排序、归并排序等方法）在内存中完成排序�?
将排序完成的数据写入磁盘�?
重复步骤 1 �?2 直到所有的数据都存入了不同�?100 MB 的块（临时文件）中。在这个例子中，�?900 MB 数据，单个临时文件大小为 100 MB，所以会产生 9 个临时文件�?
读入每个临时文件（顺串）的前 10 MB �?= 100 MB / (9 �?+ 1)）的数据放入内存中的输入缓冲区，最后的 10 MB 作为输出缓冲区。（实践中，将输入缓冲适当调小，而适当增大输出缓冲区能获得更好的效果。）
执行九路归并算法，将结果输出到输出缓冲区。一旦输出缓冲区满，将缓冲区中的数据写出至目标文件，清空缓冲区。一�?个输入缓冲区中的一个变空，就从这个缓冲区关联的文件，读入下一�?0M数据，除非这个文件已读完。这是“外归并排序”能在主存外完成排序的关键步�?-- 因为“归并算法�?merge algorithm)对每一个大块只是顺序地做一轮访�?进行归并)，每个大块不用完全载入主存�?
为了增加每一个有序的临时文件的长度，可以采用置换选择排序（Replacement selection sorting）。它可以产生大于内存大小的顺串。具体方法是在内存中使用一个最小堆进行排序，设该最小堆的大小为 M。算法描述如下：

初始时将输入文件读入内存，建立最小堆�?
将堆顶元素输出至输出缓冲区。然后读入下一个记录：
若该元素的关键码值不小于刚输出的关键码值，将其作为堆顶元素并调整堆，使之满足堆的性质�?
否则将新元素放入堆底位置，将堆的大小�?1�?
重复�?2 步，直至堆大小变�?0�?
此时一个顺串已经产生。将堆中的所有元素建堆，开始生成下一个顺串。[3]
此方法能生成平均长度�?2M 的顺串，可以进一步减少访问外部存储器的次数，节约时间，提高算法效率�?
 
 */

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef int TYPE;

#define MIN_MAX 8888

void k_merge(TYPE** arrs, int* lens, int k)
{
	int* cnts = (int*) malloc(sizeof(int) * k);
	int* has_next = (int*) malloc(sizeof(int) * k);
	TYPE* datas = (int*) malloc(sizeof(int) * k);
	int i;
	int min_index = 0;
	TYPE min;

	//Read each k-way first into data
	for (i = 0; i < k; i++)
	{
		if (lens[i] >= 1)
		{
			datas[i] = arrs[i][0];
			cnts[i] = 1;
			has_next[i] = 1;
		}
		else
		{
			has_next[i] = 0;
		}
	}

	while (1)
	{

		//Select min in k
		min = MIN_MAX;
		min_index = 0;
		for (i = 0; i < k; i++)
		{
			if (has_next[i])
			{
				if (datas[i] < min)
				{
					min = datas[i];
					min_index = i;
				}
			}
		}

		if (min == MIN_MAX)
		{
			//No way has data
			break;
		}
		else
		{
			//print
			printf("%d\n", datas[min_index]);

			//Succ get one min
			if (cnts[min_index] < lens[min_index])
			{
				datas[min_index] = arrs[min_index][cnts[min_index]];
				cnts[min_index]++;
			}
			else
			{
				has_next[min_index] = 0;
			}
		}
	}

	free(cnts);
}

//void k_merge(TYPE** arrs, int* lens, int k)

int main()
{
	TYPE a[5] =
	{ 1, 3, 5, 7, 17 };
	TYPE b[3] =
	{ -1, 10, 20 };
	TYPE c[4] =
	{ -20, 30, 88, 111 };
	TYPE* arrs[3] =
	{ a, b, c };
	int lens[3] =
	{ 5, 3, 4 };

	k_merge(arrs, lens, 3);

	return 0;
}

