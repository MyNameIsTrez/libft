ADDITIONAL_UNSORTED :=\
	strcmp\
	strstr

ADDITIONAL_OBJECT_STEMS := ${ADDITIONAL_UNSORTED}


ADDITIONAL_OBJECT_FILENAMES := ${addsuffix .o,${addprefix ft_,${ADDITIONAL_OBJECT_STEMS}}}


ADDITIONAL_OBJECTS := ${addprefix obj/test_,${ADDITIONAL_OBJECT_FILENAMES}}