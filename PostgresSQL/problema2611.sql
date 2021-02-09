SELECT movies.id, movies.name 
FROM movies, genres 
WHERE genres.description = 'Action' and genres.id = movies.id_genres