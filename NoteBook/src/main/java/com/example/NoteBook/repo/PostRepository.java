package com.example.NoteBook.repo;

import com.example.NoteBook.models.Post;
import org.springframework.data.repository.CrudRepository;

public interface PostRepository extends CrudRepository<Post, Long> {


}
